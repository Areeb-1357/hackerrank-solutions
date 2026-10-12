// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true
// Problem     Functions in C
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-12, 07:35 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>

int max(int x, int y) {
    return (x > y) ? x : y;
}

int max_of_four(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
