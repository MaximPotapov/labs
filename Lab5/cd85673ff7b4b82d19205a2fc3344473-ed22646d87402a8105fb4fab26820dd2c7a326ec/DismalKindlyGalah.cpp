#include <stdio.h>
#include <string>
using namespace std;

class Country {
  public:
    string name;
    int population;
    double areaSize;
};

int main()
{
    
    const int COUNTRY_ARRYA_SIZE = 2;
    int i;
    int countryWithMinPopulationDensity;
    double minPopulationDensity;
    
    Country ukraine;
    ukraine.name ="ukraine";
    ukraine.population = 42541633;
    ukraine.areaSize = 603628.0;
    
    Country russia;
    russia.name ="russia";
    russia.population = 146800000;
    russia.areaSize = 17100000.0;
    
    Country array[COUNTRY_ARRYA_SIZE] ={ukraine,russia};

    for ( i = 0; i < COUNTRY_ARRYA_SIZE; i++ ) {
      Country country = array[i]; 
      int population = country.population; 
      double area = country.areaSize; 
      double populationDensity = area/population;
      if(i==0){
          minPopulationDensity = populationDensity;
          countryWithMinPopulationDensity = i;
      }else{
          if(minPopulationDensity < populationDensity){
              minPopulationDensity = populationDensity;
              countryWithMinPopulationDensity = i;
          }
      }
    }
    Country country = array[countryWithMinPopulationDensity];
    printf(country.name.c_str());
return 0;
}