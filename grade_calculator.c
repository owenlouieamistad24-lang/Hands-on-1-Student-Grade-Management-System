#include <stdio.h>

int inputScore(char label[]) {
    int score;
    
	
  do {
  	
	printf("Enter %s Score (0-100): ", label);
    scanf("%d", &score);
    
    if (score < 0 || score > 100) {
    	printf("Error! score must be between 0 and 100.\n");
	}
	
} while (score < 0 || score > 100);
    return score;
}


int finalGrade(int quiz, int exam){
	return (quiz * 0.4) + (exam * 0.6);
	
}

char letterGrade(int grade){
	
	
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else
        return 'F';

	   
}

void displayReport (int exam, int quiz, int fgrade, char letter){
	printf("\n======Grade Report======\n");
	printf("Quiz Score: %d\n", quiz);
	printf("Exam Score: %d\n", exam);
	printf("Final Grade: %d\n", fgrade);
	printf("Letter Grade: %c\n", letter);
	printf("========================");
	
	
}

int main(){
	int quizScore, examScore, fgrade;
    char gradeLetter;
    char choice;


  do{

	quizScore = inputScore("Quiz");
    examScore = inputScore("Exam");
	
	fgrade = finalGrade(quizScore, examScore);
	
	gradeLetter = letterGrade(fgrade);
	
	displayReport(quizScore, examScore, fgrade, gradeLetter);
	
	printf("\nCalculate another grade? (Y/N): ");
	scanf(" %c", &choice);
	
} while (choice == 'Y' || choice == 'y');
	
	return 0;
}
