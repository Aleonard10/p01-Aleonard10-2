//Author Alex leonard
#include <ctime>
#include <cstdlib>
#include <iostream>

int main ()
{
    int offbyM;
    int offbyH1;
    int offbyH2;
    int loop0;
    int guessE;
    int guessM1;
    int guessM2;
    int guessH1;
    int guessH2;
    int guessH3;
    int randomNumberE;
    int randomNumberM;
    int randomNumberH;
    int loop1;
    int loop2;
    int loop3;
    char diff;
    char yesno;
    
    loop0 = 0;
    
    while (loop0 == 0)
    {
        loop1 = 0;
        
        while (loop1 == 0)
        {
            std::cout << "Select your difficulty or Quit E/M/H/Q." << std::endl;
            std::cout << "(E)asy - 1 guess, number between 1-2" << std::endl;
            std::cout << "(M)edium, - 2 guesses, number between 1-10" << std::endl;
            std::cout << "(H)ard - 3 guesses, number between 1-100" << std::endl;
            std::cout << "(Q)uit - Exits the program." << std::endl;
            std::cout << "Enter a capital E/M/H/Q: " << std::endl;
            std::cin >> diff;
            
            if (diff == 'Q')
            {
                std::cout << "Quitting program." << std::endl;
                loop0++;
                loop1++;
            }
            else if (diff == 'E')
            {
                std::cout << "Easy selected." << std::endl;
                srand( time(NULL));
                randomNumberE = rand() % 2 + 1;
                std::cout << "Guess a number between 1-2" << std::endl;
                std::cin >> guessE;
                
                if (2 >= guessE >= 1)
                {
                    if (guessE == randomNumberE)
                    {
                        std::cout << "You guessed correctly!" << std::endl;
                    }
                    else
                    {
                        std::cout << "You guessed incorrectly." << std::endl;
                    }
                    std::cout << "Want to play again? (Y/N)" << std::endl;
                    std::cin >> yesno;
                    if (yesno == 'Y')
                    {
                        loop0 = 0;
                    }
                    else if (yesno == 'N')
                    {
                        loop0++;
                        loop1++;
                        std::cout << "Quitting program." << std::endl;
                        
                    }
                }
                
            }
            else if (diff == 'M')
            {
                std::cout << "Medium selected." << std::endl;
                srand( time(NULL));
                randomNumberM = rand() % 10 + 1;
                std::cout << "Guess a number between 1-10" << std::endl;
                std::cin >> guessM1;
                
                if (10 >= guessM1 >= 1)
                {
                    if (guessM1 == randomNumberM)
                    {
                        std::cout << "You guessed correctly!" << std::endl;
                    }
                    else
                    {
                        if (guessM1 - randomNumberM > 0)
                        {
                           std::cout << "Your guess was higher." << std::endl; 
                        } 
                        else if (guessM1 - randomNumberM < 0)
                        {
                           std::cout << "Your guess was lower." << std::endl; 
                        }
                        std::cout << "Enter a second guess." << std::endl;
                        std::cin >> guessM2;
                        if (guessM2 == randomNumberM)
                        {
                            std::cout << "You guessed correctly." << std::endl;
                        }
                        else 
                        {
                            if (10 >= guessM2 >= 1)
                            {
                                std::cout << "You guessed incorrectly, the random number was " << randomNumberM << std::endl;
                                std::cout << "You were off by " << abs(guessM2 - randomNumberM) << std::endl;
                            }
                        }
                            
                    }
                    std::cout << "Want to play again? (Y/N)" << std::endl;
                    std::cin >> yesno;
                    if (yesno == 'Y')
                    {
                    loop0 = 0;
                    }
                    else if (yesno == 'N')
                    {
                    loop0++;
                    loop1++;
                    std::cout << "Quitting program." << std::endl;
                    }
                }
                    
            }
            else if (diff == 'H')
            {
                std::cout << "Hard selected." << std::endl;
                srand( time(NULL));
                randomNumberH = rand() % 100 + 1;
                std::cout << "Guess a number between 1-100" << std::endl;
                std::cin >> guessH1;
                
                if (100 >= guessH1 >= 1)
                {
                    if (guessH1 == randomNumberH)
                    {
                        std::cout << "You guessed correctly!" << std::endl;
                    }
                    else
                    {
                        if (guessH1 - randomNumberH > 0)
                        {
                           std::cout << "Your guess was higher." << std::endl; 
                        } 
                        else if (guessH1 - randomNumberH < 0)
                        {
                           std::cout << "Your guess was lower." << std::endl; 
                        }
                        std::cout << "Enter a second guess." << std::endl;
                        std::cin >> guessH2;
                        if (guessH2 == randomNumberH)
                        {
                            std::cout << "You guessed correctly!" << std::endl;
                        }
                        else
                        {
                            if (guessH2 - randomNumberH > 0)
                            {
                                std::cout << "Your guess was higher." << std::endl; 
                            } 
                            else if (guessH2 - randomNumberH < 0)
                            {
                                std::cout << "Your guess was lower." << std::endl; 
                            }
                            std::cout << "Enter a third guess." << std::endl;
                            std::cin >> guessH3;
                            if (guessH3 == randomNumberH)
                            {
                                std::cout << "You guessed correctly!" << std::endl;
                            }
                            else
                            {
                                if (100 >= guessH3 >= 1)
                                {
                                    std::cout << "You guessed incorrectly, the random number was " << randomNumberH << std::endl;
                                    std::cout << "You were off by " << abs(guessH3 - randomNumberH) << std::endl;
                                } 
                            }
                            
                            
                        }
                        std::cout << "Want to play again? (Y/N)" << std::endl;
                        std::cin >> yesno;
                        if (yesno == 'Y')
                        {
                            loop0 = 0;
                        }
                        else if (yesno == 'N')
                        {
                            loop0++;
                            loop1++;
                            std::cout << "Quitting program." << std::endl;
                        }
                        
                    }
                }
                
            }
            
        }
        
        loop0++;
    }
    
return 0;
}
