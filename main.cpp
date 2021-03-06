#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 
 int
 float
 bool
 double
 char
 unsigned int
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int a = 1;
    int b = 2;
    int c = 3;

    float myFloat = 1.2f;
    float pi = 3.14159f;
    float randomNumber = 7.34f;

    bool checka = false;
    bool checkb = false;
    bool checkc = false;

    double myDouble1 = 1.0;
    double myDouble2 = 2.00;
    double myDouble3 = 3.12;

    char firstLetter = 'a';
    char lastLetter = 's';
    char middleInitial = 'r';

    ignoreUnused(number, a, b, c, myFloat, pi, randomNumber, checka, checkb, checkc, myDouble1, myDouble2, myDouble3, firstLetter, lastLetter, middleInitial);               


}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int guessTheNumber(int theNumber, int numberOfTries = 3)
{
    ignoreUnused(theNumber, numberOfTries);
    return {};
}

/*
 2)
 */

 float doSomeMath(int smallNumber, int bigNumber, float coursePi = 3.14f)
 {
     ignoreUnused(smallNumber, bigNumber, coursePi);
     return {};
 }

/*
 3)
 */

 bool checkTheStatus(bool currentStatus)
 {
     ignoreUnused(currentStatus);
     return {};
 }

/*
 4)
 */

 void questionExistence(int age, int midlifeCrisis = 40)
 {
     ignoreUnused(age, midlifeCrisis);
 }

/*
 5)
 */

 double calculateTheThing(float thing1, float thing2, float thing3)
 {
     ignoreUnused(thing1, thing2, thing3);
     return {};
 }

/*
 6)
 */

 int basicAdding(int number1, int number2)
 {
    int sum = number1 + number2;
    return sum;
 }

/*
 7)
 */
 bool greaterThan(int value1, int value2 = 0)
 {
     if (value1 > value2)
     {
         return true;
     }
     return false;
 }

/*
 8)
 */

 int expiredFood(int daysSince = 0)
 {
     ignoreUnused(daysSince);
     return {};
 }

/*
 9)
 */
 bool statusFlag(bool flagA, bool flagB)
 {
     ignoreUnused(flagA, flagB);
     return {};
 }

/*
 10)
 */
 float integrateArea(int startValue = 0, int endValue = 28)
 {
     ignoreUnused(startValue, endValue);
     return {};
 }

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto numberGuessed = guessTheNumber(7, 3);
    
    //2)
    auto mathDone = doSomeMath(1, 300, 3.14f);
    
    //3)
    auto statusChecked = checkTheStatus(1);

    //4)
    questionExistence(28, 45);
    
    //5)
    auto thingCalculated = calculateTheThing(4.56f, 3.156f, 6.3214554f);
    
    //6)
    auto sum = basicAdding(3, 7);
    std::cout << "The sum is: " << sum << std::endl;
    
    //7)
    auto greaterThanTest = greaterThan(5, 1);
    std::cout << "1 is a win: Status = " << greaterThanTest << "\n\n\n";
    
    //8)
    auto foodExpired = expiredFood(365);
    
    //9)
    auto flagStatus = statusFlag(0, 1);
    
    //10)
    auto areaIntegrated = integrateArea(0, 28);

    ignoreUnused(numberGuessed, mathDone, statusChecked, thingCalculated, foodExpired, flagStatus, areaIntegrated, carRented);
    
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
