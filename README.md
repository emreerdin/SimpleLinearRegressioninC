# Linear Regression in C

A simple implementation of linear regression algorithm written in C programming language. This project demonstrates the fundamental concepts of linear regression including slope calculation, y-intercept calculation, and mean squared error evaluation.

## Overview

This program implements linear regression from scratch using basic mathematical operations. It calculates the best-fit line for a given dataset and provides prediction capabilities along with error measurement.

## Features

- **Linear Regression Calculation**: Computes slope and y-intercept using least squares method
- **Mean Calculation**: Calculates mean values for both X and Y coordinates
- **Prediction**: Makes predictions for new input values
- **Error Measurement**: Calculates Mean Squared Error (MSE) to evaluate model performance
- **Structured Data**: Uses custom struct to organize coordinate pairs

## Mathematical Background

The program implements the following linear regression formulas:

- **Slope (m)**: `m = Σ[(xi - x̄)(yi - ȳ)] / Σ[(xi - x̄)²]`
- **Y-intercept (b)**: `b = ȳ - m * x̄`
- **Prediction**: `y = mx + b`
- **Mean Squared Error**: `MSE = Σ(yi - ŷi)² / n`

Where:
- `xi, yi` are individual data points
- `x̄, ȳ` are mean values
- `ŷi` are predicted values
- `n` is the number of data points

## Code Structure

### Data Structure
```c
typedef struct{
    double x;
    double y;
} DataSet;
```

### Functions
- `CalculateXMean()` - Calculates mean of X values
- `CalculateYMean()` - Calculates mean of Y values
- `CalculateSlope()` - Computes the slope of the regression line
- `CalculateIntercept()` - Computes the y-intercept
- `MeanSquaredError()` - Calculates MSE for model evaluation

## Sample Dataset

The program uses the following sample dataset:
```
(1, 3), (5, 3), (6, 2), (7, 5), (4, 2)
```

## Compilation and Usage

### Prerequisites
- GCC compiler or any C compiler
- Standard C library

### Compilation
```bash
gcc -o linear_regression main.c
```

### Running the Program
```bash
./linear_regression
```

### Expected Output
The program outputs:
1. Prediction for x = 1
2. Mean Squared Error of the model

## Example Output
```
2.590909
1.528926
```

This means:
- For input x = 1, the predicted y value is approximately 2.59
- The Mean Squared Error of the model is approximately 1.53

## How It Works

1. **Data Input**: The program starts with a predefined dataset of 5 coordinate pairs
2. **Mean Calculation**: Calculates the mean of X and Y values
3. **Slope Calculation**: Uses the least squares formula to find the optimal slope
4. **Intercept Calculation**: Determines where the line crosses the y-axis
5. **Prediction**: Makes a prediction for x = 1 using the linear equation
6. **Error Evaluation**: Calculates MSE to assess model accuracy

## Customization

To use your own data:
1. Modify the `dataSet` array in the `main()` function
2. Update the array size and length parameter accordingly
3. Recompile and run

Example:
```c
DataSet dataSet[3] = {{1,2}, {2,4}, {3,6}};
double xMean = CalculateXMean(dataSet, 3);
// ... rest of the code with length = 3
```

## Educational Value

This implementation is ideal for:
- Understanding linear regression fundamentals
- Learning C programming with mathematical applications
- Studying least squares method
- Exploring statistical computations in C

## Future Enhancements

Potential improvements could include:
- Dynamic memory allocation for variable dataset sizes
- File input/output for external datasets
- Multiple linear regression support
- R-squared calculation
- Visualization capabilities
- Command-line argument support

## License

This project is open source and available under the MIT License.

## Contributing

Feel free to fork this project and submit pull requests for any improvements or bug fixes.
