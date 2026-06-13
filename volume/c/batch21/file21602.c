// fichero 21602 -- macros y constantes
#define LIMITE_21602 21702
#define FACTOR_21602 3

int aplicar_limite21602(int valor) {
    if (valor > LIMITE_21602) return LIMITE_21602;
    return valor * FACTOR_21602;
}
