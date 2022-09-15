#include <iostream>

/*
The function of the main method is to calculate the increase/decrease in acres burned
between the first and second years and to calculate the carbon dioxide emissions for
the first and second years. The calculations are then printed to the console.
*/
int main() {

    //initialize the different variables
    const double CDEPerAcre = 26.7;
    int firstYear = 0;
    int firstYearAcres = 0;
    int secondYear = 0;
    int secondYearAcres = 0;

    //print the questions to the console and store the responses to the variables
    std::cout << "Enter the first year: ";
    std::cin >> firstYear;
    
    std::cout << "Enter the acres consumed by forest fire that year: ";
    std::cin >> firstYearAcres;
    
    std::cout << "Enter the second year: ";
    std::cin >> secondYear;
    
    std::cout << "Enter the acres consumed by forest fire that year: ";
    std::cin >> secondYearAcres;

    //calculate the first year Carbon Dioxide Emissions
    double firstYearCarbonDioxideEmissions = firstYearAcres * CDEPerAcre;

    //calculate the second year Carbon Dioxide Emissions
    double secondYearCarbonDioxideEmissions = secondYearAcres * CDEPerAcre;

    //calculate the percent difference between the first and second year acres consumed
    double percentDifference = 100 * (((double)secondYearAcres/firstYearAcres) - 1);

    //print the results to the console
    std::cout << "In year " << firstYear << ", forest fires generated " << firstYearCarbonDioxideEmissions << " tons of carbon dioxide.\n";
    std::cout << "In year " << secondYear << ", forest fires generated " << secondYearCarbonDioxideEmissions << " tons of carbon dioxide.\n";
    std::cout << "Between " << firstYear << " and " << secondYear << ", there was a " << percentDifference << "% increase in acres consumed by forest fires.\n";

    return 0;
}