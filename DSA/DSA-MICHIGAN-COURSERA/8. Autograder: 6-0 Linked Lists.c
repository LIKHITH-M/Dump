int day_of_year(struct simpledate *pd) /* set day of year from month, day */
{
    int leap = (pd->year % 4 == 0 && (pd->year % 100 != 0 || pd->year % 400 == 0)); // Check for leap year
    int day_count = pd->day; // Start with the number of days in the current month

    // Sum days of all previous months 
  int i;
    for ( i = 1; i < pd->month; i++) {
        day_count += day_tab[leap][i]; // Use the correct day_tab based on leap year
    }

    return day_count; // Return the total number of days
}

void dump_date(struct simpledate *pd) /* print date from year, month, day */
{
    // Print the date in the specified format
    printf("%04d/%02d/%02d\n", pd->year, pd->month, pd->day);
}
