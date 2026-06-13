// fichero 13486 -- macros y constantes
#define LIMITE_13486 13586
#define FACTOR_13486 2

int aplicar_limite13486(int valor) {
    if (valor > LIMITE_13486) return LIMITE_13486;
    return valor * FACTOR_13486;
}
