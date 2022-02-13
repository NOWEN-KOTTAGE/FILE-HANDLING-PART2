#include<stdio.h>
int main(void){
  char DivID[50];
  int noPt;
  int i;
  FILE *cfPtr;
  cfPtr=fopen("patient.dat","w");
  if(cfPtr==NULL)
  {
    printf("File cannot be openned");
    return -1;
  }
  fprintf(cfPtr,"Division ID\t No of Patients\n");
  for(i=0;i<=5;i++){
    printf("Enter Division ID : \n");
    scanf("%s",DivID);
    printf("Enter No of patients : ");
    scanf("%d",&noPt);
    fprintf(cfPtr,"%s\t %d\n",DivID,noPt);
  }
  fclose(cfPtr);
  return 0;
}