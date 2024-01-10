#include <stdio.h>
#include <assert.h>

// Function to convert seconds to hours, minutes, and remaining seconds
void convert_seconds(int seconds, int* hours, int* minutes, int* remainingSeconds) {
    *hours = seconds / 3600;
    *minutes = (seconds % 3600) / 60;
    *remainingSeconds = seconds % 60;
}

// Function to format time components
void format_time(int hours, int minutes, int remainingSeconds, char* result) {
    sprintf(result, "%d seconds corresponds to ", hours * 3600 + minutes * 60 + remainingSeconds);

    // Check for hours
    if (hours > 0) {
        sprintf(result + strlen(result), "%d hour%s", hours, (hours > 1) ? "s" : "");
        if (minutes > 0 || remainingSeconds > 0) {
            sprintf(result + strlen(result), ", ");
        }
    }

    // Check for minutes
    if (minutes > 0) {
        sprintf(result + strlen(result), "%d minute%s", minutes, (minutes > 1) ? "s" : "");
        if (remainingSeconds > 0) {
            sprintf(result + strlen(result), " and ");
        }
    }

    // Check for seconds
    if (remainingSeconds > 0 || (hours == 0 && minutes == 0)) {
        sprintf(result + strlen(result), "%d second%s", remainingSeconds, (remainingSeconds > 1) ? "s" : "");
    }
}

int main(void) {
    int seconds;
    
    // Input number of seconds
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    int hours, minutes, remainingSeconds;
    char result[256];

    convert_seconds(seconds, &hours, &minutes, &remainingSeconds);
    format_time(hours, minutes, remainingSeconds, result);

    printf("%s\n", result);

    return 0;

    // Run the tests
    test_convert_seconds();
    test_format_time();
}

// Function to test the conversion function
void test_convert_seconds() {
    int hours, minutes, remainingSeconds;

    // Test 1
    convert_seconds(4000, &hours, &minutes, &remainingSeconds);
    assert(hours == 1 && minutes == 6 && remainingSeconds == 40);

    // Test 2
    convert_seconds(75, &hours, &minutes, &remainingSeconds);
    assert(hours == 0 && minutes == 1 && remainingSeconds == 15);

    // Test 3
    convert_seconds(3700, &hours, &minutes, &remainingSeconds);
    assert(hours == 1 && minutes == 1 && remainingSeconds == 40);

    // Test 4
    convert_seconds(55, &hours, &minutes, &remainingSeconds);
    assert(hours == 0 && minutes == 0 && remainingSeconds == 55);

    // Test 5
    convert_seconds(3661, &hours, &minutes, &remainingSeconds);
    assert(hours == 1 && minutes == 1 && remainingSeconds == 1);

    printf("All tests passed for convert_seconds.\n");
}

// Function to test the formatting function
void test_format_time() {
    char result[256];

    // Test 1
    format_time(1, 6, 40, result);
    assert(strcmp(result, "4000 seconds corresponds to 1 hour, 6 minutes and 40 seconds") == 0);

    // Test 2
    format_time(0, 1, 15, result);
    assert(strcmp(result, "75 seconds corresponds to 1 minute and 15 seconds") == 0);

    // Test 3
    format_time(1, 1, 40, result);
    assert(strcmp(result, "3700 seconds corresponds to 1 hour, 1 minute and 40 seconds") == 0);

    // Test 4
    format_time(0, 0, 55, result);
    assert(strcmp(result, "55 seconds corresponds to 55 seconds") == 0);

    // Test 5
    format_time(1, 1, 1, result);
    assert(strcmp(result, "3661 seconds corresponds to 1 hour, 1 minute and 1 second") == 0);

    printf("All tests passed for format_time.\n");
}
