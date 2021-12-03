#include<iostream>
#include<string>

int main()
{
    std::string adjective, verb_Ending_Up, animal, fashion_article, food, school_subject, name_teacher, profession, timeOfDay, adjective1; 
    std::cout<< "Enter an adjective\n "; 
    getline(std::cin, adjective);
    std::cout<< "Enter a verb that ends 'up' \n"; 
    getline(std::cin, verb_Ending_Up); 
    std::cout<< "Enter a fashion article \n"; 
    getline(std::cin, fashion_article);
    std::cout<< "Enter a food \n"; 
    getline(std::cin, food);
    std::cout<< "Enter an animal \n"; 
    getline(std::cin, animal);
    std::cout<< "Enter an school subject\n"; 
    getline(std::cin, school_subject);
    std::cout<< "Enter name of a teacher\n"; 
    getline(std::cin, name_teacher);
    std::cout<< "Enter a profession \n"; 
    getline(std::cin, profession);
    std::cout<< "Enter a time of a day \n"; 
    getline(std::cin, timeOfDay);
    std::cout<< "Enter another adjective\n "; 
    getline(std::cin, adjective1);
    std::cout<< "Being a college student is very "<<adjective<<".\n";
    std::cout<< "Every morning, I "<<verb_Ending_Up<<" out of bed when my alarm clock rings.\n";
    std::cout<< "After I shower and put on my favorite "<<fashion_article<<", I eat "<<food<<" for breakfast.\n";
    std::cout<< "me and my "<< animal<< " do some exercise together.\n";
    std::cout<< "My first class is "<<school_subject<<" with professor "<<name_teacher<<".\n";
    std::cout<< "My parents say this "<<profession<<" field, is where the future is, and I love their encouragements.\n";
    std::cout<< "I love to do my homework, so I have the "<<timeOfDay<<" to spend with my friends.\n";
    std::cout<< "i'm telling you, if you choose to go to college, be prepared, because it is very "<<adjective1<<".\n \n";


return 0; 
}