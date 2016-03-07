# EnrichAssignments
#include <stdio.h>

struct date {
  int year;
  int month;
  int day;
};

int isaLeapYear(int);
int previousYear(struct date);
int monthinnumber(struct date);
char* monthName(struct date);
char* prevMonthName(struct date);
int currentDay(struct date);
int dayIndex(struct date);
int validate(struct date);
int currentYear(struct date);
char* dayOfWeek(struct date);
struct date dateBeforeNDays(struct date, int);
int daysBetweenDates(struct date, struct date);

int main() {
    struct date d;
    int N;

    printf("Enter a date: ");
    scanf("%d-%d-%d", &d.year, &d.month, &d.day);

    if (!validate(d)) {
        printf("\nInvalid date");
        return 0;
    }

    printf("\nThe Year: %d", currentYear(d));
    printf("\nThe Previous year: %d", previousYear(d));
    printf("\nThe Month In Number: %d", monthinnumber(d));
    printf("\nThe Month name: %s", monthName(d));
    printf("\nThe Previous month: %s", prevMonthName(d));
    printf("\nThe Day in Number: %d", currentDay(d));
    printf("\nThe Day name: %s", dayOfWeek(d));
    printf("\nThe Day index of the year: %d", dayIndex(d));
    printf("\nEnter value for N: ");
    scanf("%d", &N);
    if (N < 0) {
        return 0;
    }
    struct date before = dateBeforeNDays(d, N);
    printf("\nDate before N days: %04d-%02d-%02d", before.year, before.month, before.day);


    printf("\n\nDAYS BETWEEN DATES: ");
    printf("\nEnter another date: ");
    struct date d1;
    scanf("%d-%d-%d", &d1.year, &d1.month, &d1.day);
    if (!validate(d1)) {
        printf("\nInvalid date");
        return 0;
    }
    printf("\nDifference in dates between 2 dates: %d days", daysBetweenDates(d, d1));

    printf("\n");

    return 0;
}

int isaLeapYear(int year) {
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        return 1;
    }

    return 0;
}

int validate(struct date d) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //day validation
    if (d.day > 31 || d.day < 1) {
        return 0;
    }
  
    if (d.day > days[d.month - 1]) {
        if (d.month != 2) {
            return 0;
        } else if (d.day == 29 && isaLeapYear(d.year)) { //check leap year condition
            return 1;
        } else {
            return 0;
        }
    }

    //month validation
    if (d.month > 12 || d.month < 1) {
        return 0;
    }

    //year validation
    if (d.year < 1 || d.year > 9999) {
        return 0;
    }

    return 1;
}

int currentYear(struct date d) {
    return d.year;
}

int previousYear(struct date d) {
    return d.year - 1;
}

int monthinnumber(struct date d) {
    return d.month;
}

char* monthName(struct date d) {
    char* months[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    
    return months[d.month - 1];
}

char* prevMonthName(struct date d) {
    char* months[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    
    if (d.month == 1) {
        return months[11];
    }
    return months[d.month - 2];
}

int currentDay(struct date d) {
    return d.day;
}

char* dayOfWeek(struct date d) {
    char* days[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };

    //Sakamoto's algorithm
    int weekDay[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    int y = d.year;
    y -= d.month < 3;
    int index = (y + y / 4 - y / 100 + y / 400 + weekDay[d.month - 1] + d.day) % 7;

    return days[index];
}

int dayIndex(struct date d) {
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index = 0;
    int i;
    
    for (i = 0; i < d.month - 1; i++) {
        index += monthDays[i];
    }
    
    index = index + d.day;
    index = index + isaLeapYear(d.year);

    return index;
}

int daysBetweenDates(struct date d1, struct date d2) {

    int numDays = 0, i;
    //int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    struct date temp;
    if (d1.year > d2.year) {
        temp = d1;
        d1 = d2;
        d2 = temp;
    } else if (d1.month > d2.month) {
        temp = d1;
        d1 = d2;
        d2 = temp;
    } else if (d1.day > d2.day) {
        temp = d1;
        d1 = d2;
        d2 = temp;
    }

    //d1 earlier than d2
    for (i = d1.year; i < d2.year; i++) {
        numDays += isaLeapYear(i) ? 366 : 365;
    }

    numDays -= dayIndex(d1);
    numDays += dayIndex(d2);

    return numDays;

}

struct date dateBeforeNDays(struct date d, int N) {
    struct date temp;
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (N == 0) {
        return d;
    }

    temp = d;
    int dayInd = dayIndex(d);
    if (N > dayInd) {
        N -= dayInd;
        temp.day = 31;
        temp.month = 12;
        temp.year -= 1;

        dayInd = dayIndex(temp);
        while (N > dayInd) {
            temp.year--;
            N -= dayInd;
            dayInd = dayIndex(temp);
        }
    }
    dayInd = dayIndex(temp);
    if (N < dayInd) {
        if (N >= temp.day) {
            temp.month--;
            if (temp.month == 0) {
                temp.month = 12;
            }
            N -= temp.day;
            temp.day = monthDays[temp.month - 1];
            if (temp.month == 2) {
                temp.day += isaLeapYear(temp.year);
            }

            while (N >= temp.day) {
                temp.month--;
                if (temp.month == 0) {
                    temp.month = 12;
                }
                N -= temp.day;
                temp.day = monthDays[temp.month - 1];
                if (temp.month == 2) {
                    temp.day += isaLeapYear(temp.year);
                }
            }
        }

        //subtract days
        if (N < temp.day) {
            temp.day -= N;
        }
    }

    return temp;
}
