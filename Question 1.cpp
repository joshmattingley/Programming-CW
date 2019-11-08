#include <iostream>
#include <iomanip>
#include <cmath>

int main () {

    //These 2 lines set the decimal places throughout the project.
    std::cout << std::fixed;
    std::cout << std::setprecision(0);

    //Data order is Swim, Cycle, Run
    float Speed[] = {6.2, 52.8, 18.3};

    //Defining the array of disciplines
    char Disc[3][12] = {"Swimming", " Cylcing", " Running"};

    //Distance variables
    float Swim_Dist, Cyc_Dist, Run_Dist;

    //Defining my array of variables
    float Dist[] = {Swim_Dist, Cyc_Dist, Run_Dist};

    //Loop that collects the data for each discipline, storing in variables
    for(int i = 0; i < 3; i++) {
      std::cout << "Please insert a distance for " << Disc[i] << " in kilometers: ";
      std::cin >> Dist[i];
    }

    //Adding a gap (makes it tidy)
    std::cout << std::endl;

    //This is the friendly message, output to the user recalling their values.
    for (int i = 0; i < 3; i++) {
      std::cout << "For " << Disc[i] << " distance, you entered: " << Dist[i] << " meters\n";
    }

    //An array of the time taken for each discipline
    float Time[] = {Dist[0]/Speed[0], Dist[1]/Speed[1], Dist[2]/Speed[2]};

    //Adding a gap (makes it tidy)
    std::cout << std::endl;

    //This if statement forces the user to enter positive integers for the distances
    if (Dist[0] < 0 || Dist[1] < 0 || Dist [2] < 0){
      std::cout << "Please enter positive distances!";
    }
      else {
        //Setting up heading of the title
        std::cout << "Discipline\t" << "Time Taken (s)\n";
        std::cout << "==============================\n";

        //This loop outputs our discipline and the accompanying time taken, it also sets the decimal places
        for (int i = 0; i < 3; i++) {
          std::cout << std::setprecision(3);
          std::cout << Disc[i] << " \t" << Time[i] * pow(60, 2) <<"\n";
            }
              std::cout << "\n";

              //This tells the user the total time
              std::cout << std::setprecision(2);
              std::cout << "Therefore, the total time would be " << Time[0] + Time[1] + Time[2] << " Hours";
        }


}
