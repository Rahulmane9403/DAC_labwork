#include <iostream>
#include <SFML/Graphics.hpp> // For graphics and input handling

using namespace sf;

// Bird class
class Bird {
public:
    float x, y; // Position
    float vx, vy; // Velocity
    float ax, ay; // Acceleration
    float radius; // Bird's radius

    Bird(float x, float y, float radius) : x(x), y(y), radius(radius) {}

    void update(float dt) {
        vx += ax * dt;
        vy += ay * dt;
        x += vx * dt;
        y += vy * dt;
    }

    void draw(RenderWindow& window) {
        CircleShape bird(radius);
        bird.setPosition(x, y);
        window.draw(bird);
    }
};

// Pipe class
class Pipe {
public:
    float x, y; // Position
    float width, height; // Size

    Pipe(float x, float y, float width, float height) : x(x), y(y), width(width), height(height) {}

    void draw(RenderWindow& window) {
        RectangleShape pipe(Vector2f(width, height));
        pipe.setPosition(x, y);
        window.draw(pipe);
    }
};

int main() {
    // Initialize SFML
    RenderWindow window(VideoMode(640, 480), "Flappy Bird");

    // Create bird and pipes
    Bird bird(100, 200, 20);
    Pipe pipe1(300, 200, 50, 100);
    Pipe pipe2(500, 300, 50, 100);

    // Game loop
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        // Update bird and pipes
        bird.update(0.01f); // Update bird position
        pipe1.x -= 2; // Move pipe 1 to the left
        pipe2.x -= 2; // Move pipe 2 to the left

        // Check collisions
        // TODO: Implement collision detection

        // Draw everything
        window.clear();
        bird.draw(window);
        pipe1.draw(window);
        pipe2.draw(window);
        window.display();
    }

    return 0;
}
