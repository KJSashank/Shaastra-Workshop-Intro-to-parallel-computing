///    x=0;
    sum = 0.0;
    step = 1.0/(double) num_steps;
    for (i=0; i < num_steps; ++i) {
        x = (i+0.5)*step;
        sum = sum + 4.0/(1.0+x*x);
    }
    pi = step * sum; ///