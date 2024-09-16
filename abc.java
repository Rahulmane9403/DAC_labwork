import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.edge.EdgeDriver;

//
import io.github.bonigarcia.wdm.WebDriverManager;

public class abc {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		WebDriverManager.chromedriver().setup();
//		WebDriver driver = new ChromeDriver();
		WebDriverManager.edgedriver().setup();
		WebDriver driver = new EdgeDriver();
		driver.get("https://www.google.com/");
		driver.manage().window().maximize();
		System.setProperty("Webdriver.edgedriver", "https://www.google.com/");
		WebElement element = driver.findElement(By.name("q")); // Corrected ID
        element.sendKeys("Amazon");
        try {
            Thread.sleep(5000); 
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        WebElement search = driver.findElement(By.name("btnK"));
        search.click();
        //Shop online at Amazon India
        WebElement searchAmazon = driver.findElement(By.xpath("//*[@class='LC20lb MBeuO DKV0Md']"));
        searchAmazon.click();
        WebElement search_All = driver.findElement(By.xpath("//*[@class=\"hm-icon nav-sprite\"]"));
        search_All.click();
        WebElement search_All1 = driver.findElement(By.xpath("//*[@href=\"/gp/bestsellers/?ref_=nav_em_cs_bestsellers_0_1_1_2\"]"));
        search_All1.click();
//        driver.close();     
	}

}
