#include <cstdlib>
#include <fstream>
#include <numeric>
#include <cmath>
#include <iostream>
#include <queue>
#include <string>

/*void printQueue(std::queue<int> queue, std::ofstream output){
    while(!queue.empty()){
        for(int i = 0; i < 10; i++){
            if(!queue.empty()){
                output << queue.front() << " ";
                queue.pop();
            } else {
                break;
            }
        }
        output << "\n";
        }

    }

    void BuildVector(std::vector<int> &vec, int elements, int num){
        for(int i = 0; i < elements; i++){
            vec.push_back(num);
        }
    }

*/
int main()
{
    std::queue<int> latestRatings;
    //std::vector< std::vector<int> > last500Ratings(5);

    int oneStarRatings;
    int twoStarRatings;
    int threeStarRatings;
    int fourStarRatings;
    int fiveStarRatings;
    std::string tempString;
    int latestRating;

    /*BuildVector(last500Ratings[0], 13, 1);
    BuildVector(last500Ratings[1], 2, 2);
    BuildVector(last500Ratings[2], 4, 3);
    BuildVector(last500Ratings[3], 17, 4);
    BuildVector(last500Ratings[4], 462, 5);*/


    std::ifstream uberRatings;
    uberRatings.open("uberRatings.txt");

    if(uberRatings.is_open()){
    std::cout << "uberRatings is open.\n";
    uberRatings >> tempString;
    oneStarRatings = stoi(tempString);

    uberRatings >> tempString;
    twoStarRatings = stoi(tempString);

    uberRatings >> tempString;
    threeStarRatings = stoi(tempString);

    uberRatings >> tempString;
    fourStarRatings = stoi(tempString);

    uberRatings >> tempString;
    fiveStarRatings = stoi(tempString);

    uberRatings >> tempString;
    latestRating = stoi(tempString);

   /* uberRatings >> tempString;

    while(tempString != "0"){
        latestRating = stoi(tempString);
        latestRatings.push(latestRating);
        uberRatings >> tempString;
    }*/

    std::cout << "Total number of each rating:\n";
    std::cout << "1 Star: " << oneStarRatings << "\n";
    std::cout << "2 Stars: " << twoStarRatings << "\n";
    std::cout << "3 Stars: " << threeStarRatings << "\n";
    std::cout << "4 Stars: " << fourStarRatings << "\n";
    std::cout << "5 Stars: " << fiveStarRatings << "\n";
    std::cout << "\n";
    std::cout << "Average Rating: ";
    double averageRating = ((double)(oneStarRatings * 1) + (twoStarRatings * 2) + (threeStarRatings * 3) + (fourStarRatings * 4) + (fiveStarRatings * 5))/500;

    printf("%.5f", averageRating);
   /* std::cout << "=============================\n";
    std::cout << "Latest ratings as of June 21, 2019\n";

    while(!latestRatings.empty()){
        for(int i = 0; i < 10; i++){
            if(!latestRatings.empty()){
                std::cout << latestRatings.front() << " ";
                latestRatings.pop();
            } else {
                break;
            }
        }
        std::cout << "\n";
        }
        std::cout << "\n";
    std::cout << latestRatings.size();*/
    } else {
    std::cout << "uberRatings not open.\n";
    }


    uberRatings.close();
    return 0;
}
