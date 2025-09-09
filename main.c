#include <stdio.h>
#include <stdlib.h>

typedef struct{
	
	double x;
	double y;
} DataSet;

double CalculateXMean(DataSet dataSet[], int length);
double CalculateYMean(DataSet dataSet[], int length);
double CalculateSlope(DataSet dataSet[], int length, double xMean, double yMean);
double CalculateIntercept(double slope, double xMean, double yMean);
double MeanSquaredError(DataSet dataSet[], int length, double slope, double intercept);
int main(){
	
	DataSet dataSet[5] = {{1,3}, {5,3}, {6,2},{7,5}, {4,2}};
	
	// XMean
	double xMean = CalculateXMean(dataSet, 5);
	// YMean
	double yMean = CalculateYMean(dataSet, 5);
	// Slope
	double slope = CalculateSlope(dataSet, 5, xMean, yMean);

	// Intercept
	double intercept = CalculateIntercept(slope, xMean, yMean);

	
	double prediction = (slope*1) + intercept;
	printf("%f\n", prediction);
	// MSE
	double error = MeanSquaredError(dataSet, 5, slope, intercept);
	
	printf("%f",error);
	
	
	return 0;
}

double CalculateXMean(DataSet dataSet[], int length){
	
	double sum = 0;
	int i;
	
	for(i=0; i<length; i++){
		
		sum += dataSet[i].x;
		
	}
	
	return sum/length;
	
	
}

double CalculateYMean(DataSet dataSet[], int length){
	
	double sum = 0;
	int i;
	
	for(i=0; i<length; i++){
		
		sum += dataSet[i].y;
		
	}
	
	return sum/length;
}


double CalculateSlope(DataSet dataSet[], int length, double xMean, double yMean){
	
	
	double nom = 0;
	double den = 0;
	int i;
	
	for(i=0; i<length; i++){
		
		nom += (dataSet[i].x - xMean) * (dataSet[i].y - yMean);
		den += (dataSet[i].x - xMean) * (dataSet[i].x - xMean);
	}
	
	return nom/den;
	
	
}


double CalculateIntercept(double slope, double xMean, double yMean){
	
	return yMean - (slope * xMean);
	
}


double MeanSquaredError(DataSet dataSet[], int length, double slope, double intercept){
	
	
	double sum = 0;
	int i;
	double yPred = 0;
	double error = 0;
	for(i=0; i<length; i++){
		
		yPred = (slope*dataSet[i].x) + intercept;
		error = dataSet[i].y - yPred;
		sum += error * error;
		
	}
	
	return sum/length;
	
}









