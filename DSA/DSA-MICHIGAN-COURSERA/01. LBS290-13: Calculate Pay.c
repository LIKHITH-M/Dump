void calcpay(pay, rate, hours)  // K&R (Kernighan and Ritchie) style definition
    float *pay, rate, hours;
{
    if (hours <= 40) {
        *pay = rate * hours;  // Regular pay for hours <= 40
    } else {
        *pay = (40 * rate) + ((hours - 40) * rate * 1.5);  // Overtime pay for hours > 40
    }
}
