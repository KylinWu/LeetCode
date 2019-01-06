bool judgeCircle(char* moves) {
    int i=0, x=0, y=0;
    while (moves[i]) {
        if (moves[i] == 'U')
            y += 1;
        if (moves[i] == 'D')
            y -= 1;
        if (moves[i] == 'R')
            x += 1;
        if (moves[i] == 'L')
            x -= 1;
        i++;
    }
    if (x == 0 && y == 0)
        return true;
    return false;
}
