// fichero 6438 -- macros y constantes
#define LIMITE_6438 6538
#define FACTOR_6438 4

int aplicar_limite6438(int valor) {
    if (valor > LIMITE_6438) return LIMITE_6438;
    return valor * FACTOR_6438;
}
