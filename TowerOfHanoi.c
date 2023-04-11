#include <stdio.h>
int firstTower[];
int secondTower[];
int thirdTower[];

int nthOdd(int n)
{
    return (2 * n - 1);
}
 

void Start(void){
    int towerSize;
    printf("enter size of towers");
    scanf("%d", &towerSize);
    printf("Tower size: %d", towerSize );
    *firstTower = malloc((towerSize)* sizeof(int));
    secondTower[towerSize];
    thirdTower[towerSize];

    for(int i = 0; i < sizeof(*firstTower); i++){
        firstTower[i] = nthOdd(i + 1);
    }

    
    for(int i = 0; i < sizeof(*firstTower) + 2; i++){
        
        printf("\nfirstTower[i] is: %d", firstTower[i]);
    }


    printf(" The length of int array is : %d ", sizeof(*firstTower));
}



void GameLoop(void){
    Start();
}

void Draw(void){

}

void Logic(void){

}

void Update(void){
    while(1){
        Draw();
        Logic();
    }
}

int main(){
    GameLoop();
}

