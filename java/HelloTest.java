
public class HelloTest {
    public static void main(String[] args) {
        assert Hello.greet("Chan").equals(
            "Welcome, Chan. Testing..."
        ) : "Test 1 failed";

        assert Hello.greet("Alex").equals(
            "Welcome, Alex. Testing..."
        ) : "Test 2 failed";

        System.out.println("2 Java assertions passed.");
    }
}
