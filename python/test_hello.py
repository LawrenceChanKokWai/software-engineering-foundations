import unittest

from hello import greet

class TestGreeting(unittest.TestCase):
    
    def test_greet(self):
        result = greet("Chan")
        
        self.assertEqual(result, "Welcome, Chan. Testing...")
        
if __name__ == "__main__":
    unittest.main()