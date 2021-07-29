#include <iostream>
#include <ctime>


void PrintIntro(int Difficulty)
{
    std::cout << "\n\n#### Welcome, Agent110! MI7's servers have been hacked by The Epsilon! #### \n" ;
    std::cout ;
    std::cout << "#### You are hacking into a "<< Difficulty << " level server room####\n" ;
    std::cout ;
    std::cout << "#### The difficulty will increase every level ####\n" ;
    std::cout ;
    
  
}



bool PlayerGame(int Difficulty)
{
    PrintIntro(Difficulty);

    // Token values
    const int NumA = rand() % Difficulty + 1;
    const int NumB = rand() % Difficulty + 2;
    const int NumC = rand() % Difficulty + 3;
    const int NumD = rand() % Difficulty + 4;
    const int NumE = rand() % Difficulty + 5;
    const int CodeSum = NumA + NumB + NumC + NumD + NumE;
    const int CodeProduct = NumA * NumB * NumC * NumD * NumE;


    // Print sum and product
    std::cout << std::endl;
    std::cout << " + There are 5 numbers in the Security Token..\n" ;
    std::cout << " ++ The 5 numbers ad up to " << CodeSum << std::endl;
    std::cout << " +++ The codes multiply to give " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC, GuessD, GuessE;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cin >> GuessD;
    std::cin >> GuessE;
    std::cout << "You have entered " << GuessA << GuessB << GuessC << GuessD << GuessE << std::endl;
    std::cout << " \n";
    int GuessSum = GuessA + GuessB + GuessC + GuessD + GuessE;
    int GuessProduct = GuessA * GuessB * GuessC * GuessD * GuessE;
    

    // Player check guess
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << std::endl;

        std::cout << "*** Well done agent! You have extracted a file! Keep going!***\n" ;
        
        return true;
    }
    else
    {
        std::cout << std::endl;

        std::cout << "*** Careful agent you entered a wrong code! Be alert!***\n" ;
        std::cout << "REPEAT THIS LEVEL!\n" ;
        return false;

    }
};



int main()
{
    srand(time(NULL));
    int LevelDiff = 1;

    int const MaxLevel = 5;

    int LevelsLeft = MaxLevel - LevelDiff;
            
    while (LevelDiff <= MaxLevel)
    {
        bool bPassLevel = PlayerGame(LevelDiff);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bPassLevel)
        {
            ++LevelDiff;
        }
        std::cout ;

        
    }
    std::cout << "Congratulations! You have saved the day Agent 110\n" ;
     std::cout << R"(
¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶¶¶¶11111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶1111111111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶1111111¶¶¶¶¶¶¶¶111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶11111111¶¶¶111¶¶¶¶¶¶¶1111111¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶1111111111¶¶¶1111111111111111111¶¶¶¶¶¶¶¶¶¶
¶¶¶111111111111¶¶¶¶1111111111¶¶¶¶¶¶1¶¶¶¶¶1¶¶¶
¶¶111111111111111111111111111¶¶111111111111¶¶
¶¶111111111111111111111111111111111111111111¶
¶1111¶¶¶¶1111111111111111111111111111111111¶¶
¶11¶¶¶¶¶111111111111111111111111111¶¶¶¶¶¶11¶¶
¶1¶¶¶¶¶111111111111111111111111111¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶11111111111¶11111111111111¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶111111111111¶¶1111111111111¶¶¶¶¶¶¶¶1¶¶¶
¶¶¶¶¶¶1111111111111¶¶¶111111111111¶¶¶¶¶11¶¶¶¶
¶¶¶¶¶¶1111111¶¶¶11111¶¶¶¶111111111111111¶¶¶¶¶
¶¶¶¶¶¶11111¶¶¶¶¶11111111¶¶¶¶¶¶¶¶¶¶¶¶111¶¶¶¶¶¶
¶¶¶¶¶¶111¶¶¶¶¶¶¶11111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶1¶¶¶¶¶¶¶¶¶11111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
      
)" << std::endl;
    std::cout << std::endl;
    return 0;
};