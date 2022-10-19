SILI Game: Milestone 03
In this third milestone, you will refactor your code by creating a base class called GameElement that provides the common functionality of all your game elements. All your previously created classes should derive GameElement and provide additional member functions that are unique to each class. Refactor is a term that means restructuring your code without changing the behavior. We will redesign our code to make it more readable, adaptable, and maintainable.

GameElement (game_element.h/game_element.cc)
Create a GameElement class that contains four data members: x_, y_, width_, and height_. Take note that width_, and height_ are not constant. Create accessors and mutators for x_ and y_, but only create accessors for width_ and height_.

Create a default constructor that does not receive any parameters, but sets x_ and y_ to 0, and sets width_ and height_ to 50. Create nondefault constructor that accepts four integers that will set the class' x_, y_, width_, and height_ data members (use this order for your parameters).

Create a Draw function that accepts a graphics::Image reference. The function should draw a 5 x 5 black rectangle at the game element's current x and y position.

Opponent (opponent.h/opponent.cc)
Modify the Opponent class to derive GameElement. Remove any data members and member functions that have already been declared in GameElement. Modify its constructor so that it calls the base class' nondefault constructor. It should pass the same size you used in Milestone 2 (e.g., 50 x 50).

OpponentProjectile (opponent.h/opponent.cc)
Modify the OpponentProjectile class to derive GameElement. Remove any data members and member functions that have already been declared in GameElement. Modify its constructor so that it calls the base class' nondefault constructor. It should pass the same size you used in Milestone 2 (e.g., 5 x 5).

Player (player.h/player.cc)
Modify the Player class to derive GameElement. Remove any data members and member functions that have already been declared in GameElement. However, keep the data members and member functions that are unique to the Player class. Modify its constructor so that it calls the base class' nondefault constructor. It should pass the same size you used in Milestone 2 (e.g., 50 x 50).

PlayerProjectile (player.h/player.cc)
Modify the PlayerProjectile class to derive GameElement. Remove any data members and member functions that have already been declared in GameElement. However, keep the data members and member functions that are unique to the PlayerProjectile class. Modify its constructor so that it calls the base class' nondefault constructor. It should pass the same size you used in Milestone 2 (e.g., 5 x 5).

Game (game.h/game.cc)
Create a Game class that contains five data members. A graphics::Image object that will represent your game screen. A std::vector of Opponent objects that will contain all the opponents in the game. A std::vector of OpponentProjectile that will contain all the opponent projectiles in the game. A std::vector of PlayerProjectile that will contain all the player projectiles in the game. A Player object that will represent your player.

Create a default constructor that sets the size of the game screen to 800 x 600. Create a nondefault constructor that accepts a width and height parameter that changes the size of the game screen according to their values.

Create accessors that will return references to each of the five data members of the class. A function can return a reference to a data member to allow other objects and functions to manipulate them. The code below shows you an example. GetName returns a reference to name_. This reference allows the erase function to change name_ inside the Id object. Without references, GetName returns a copy and therefore will not change the value of name_.

class Id {
public:
  Id(const std::string& name) : name_(name) { }
  std::string& GetName() { return name_; }
  void SetName(const std::string& name) { name_ = name; }
private:
  std::string name_;
};

int main() {
  Id my_id("01-22334");
  std::cout << my_id.GetName() << std::endl;
  my_id.GetName().erase(0, 3);
  std::cout << my_id.GetName() << std::endl;
  return 0;
  
}
Screen output:

01-22334
22334
CreateOpponents
Create a CreateOpponents member function that creates Opponent objects and adds them to the std::vector of Opponent objects in the class. You can decide on the number and the locations of your objects. However, make sure to create at least one Opponent object.

CreateOpponentProjectiles
Create a CreateOpponentProjectiles member function that creates OpponentProjectile objects and adds them to the std::vector of OpponentProjectile objects in the class. You can decide on the number and the locations of your objects. However, make sure to create at least one OpponentProjectile object.

CreatePlayerProjectiles
Create a CreatePlayerProjectiles member function that creates PlayerProjectile objects and adds them to the std::vector of PlayerProjectile objects in the class. You can decide on the number and the locations of your objects. However, make sure to create at least one PlayerProjectile object.

Init
Create an Init member function that changes the position of the Player and calls the CreateOpponents, CreateOpponentProjectiles, and CreatePlayerProjectiles functions. The Player's location should not be at (0, 0).

UpdateScreen
Create an UpdateScreen member function that calls the Draw function of all elements of your game (i.e., Opponents, OpponentProjectiles, PlayerProjectiles, and Player stored in the class' data members). Make sure to pass the game screen as the parameter so everything is drawn on the same image.

Start
Create a Start member function that calls the ShowUntilClosed function of the game screen to display it.

Driver (main.cc)
Create a Game object. Call its Init function to initialize all game elements, UpdateScreen to draw all game elements then call its Start function to display the game screen.

Compiling and running the program
To manually test your code you can compile and run this program with:

clang++ -std=c++17 main.cc game.cc game_element.cc player.cc opponent.cc cpputils/graphics/image.cc -o main -lm -lX11 -lpthread
./main
Note: you need a few additional flags on Mac which are not shown here.

However, that's a lot to type, so I've included a shortcut to compile and create main:

make build
./main
Run the unit tests
I've provided unit tests, which you can try with make test. Use the output to help you debug any issues in your program.

Run the style and format checkers
You can use two checkers to avoid common errors and make sure your code is easy to read. Use their output to follow programming best practices and make your code readable.

make stylecheck
make formatcheck
Submission checklist
Compiled and ran the driver (main).
Manually checked for compilation and logical errors.
Ensured no errors on the unit test (make test).
Followed advice from the stylechecker (make stylecheck).
Followed advice from the formatchecker to improve code readability (make formatcheck).
Answered the questions in reflection.md
Code evaluation
Open the terminal and navigate to the folder that contains this exercise. Assuming you have pulled the code inside of /home/student/labex02-tuffy and you are currently in /home/student you can issue the following commands

cd labex02-tuffy
You also need to navigate into the problem you want to answer. To access the files needed to answer problem 1, for example, you need to issue the following command.

cd prob01
When you want to answer another problem, you need to go back up to the parent folder and navigate into the next problem. Assuming you are currently in prob01, you can issue the following commands to go to the parent folder then go into another problem you want to answer; prob02 for example.

cd ..
cd prob02
Use the clang++ command (or make build) to compile your code and the ./ command to run it. The sample code below shows how you would compile code save in main.cc and into the executable file main. Make sure you use the correct filenames required in this problem. Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

clang++ -std=c++17 main.cc game.cc game_element.cc player.cc opponent.cc cpputils/graphics/image.cc -o main -lm -lX11 -lpthread
./main
You can run one, two, or all the commands below to test your code, stylecheck your code's design, or formatcheck your work. Kindly make sure that you have compiled and executed your code before issuing any of the commands below to avoid errors.

make test
make stylecheck
make formatcheck
A faster way of running all these tests uses the all parameter.

make all
Submission
I recommend pushing to Github frequently to back up your work.
