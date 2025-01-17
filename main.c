#include <stdio.h>


int main() {
  
  int weight;
  int planet;
  
  int Mercury;
  int Venus;
  int Mars;
  int Jupiter;
  int Saturn;
  int Uranus;
  int Neptune;

  
  
  printf("Please enter weight on Earth: ");
  scanf("%d", &weight);
  weight = weight;
  printf("Please select planet to calculate weight:\n");
  printf("1.Mercury\t2.Venus\t3.Mars\t4.Jupiter\t5.Saturn\t6.Uranus\t7.Neptune\n");
  scanf("%d", &planet);

  switch(planet) {
    case 1:
      printf("Weight on Mercury: %f", weight * 0.38);
      break;
    case 2:
      printf("Weight on Venus: %f", weight * 0.91);
      break;
    case 3:
      printf("Weight on Mars: %f", weight * 0.38);
      break;
    case 4:
      printf("Weight on Jupiter: %f", weight * 2.34);
      break;
    case 5:
      printf("Weight on Saturn: %f", weight * 1.06);
      break;
    case 6:
      printf("Weight on Uranus: %f", weight * 0.92);
      break;
    case 7: 
      printf("Weight on Neptune: %f", weight * 1.19);
      break;
    default:
      printf("Invalid input");
      break;
  }
    
    
  return 0;
}