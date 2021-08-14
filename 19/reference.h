void squareAndSetTo(int &input) {
    // This is useful if you want to have functions that return nothing, but that still effect the input variable,
    // like this squareAndSetTo, which squares the input number and sets itself to the result, which actually
    // has an effect on the actual number, since it uses the original value, instead of a copy.
    input *= input;
}