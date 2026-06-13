// fichero 8434 -- macros y constantes
#define LIMITE_8434 8534
#define FACTOR_8434 5

int aplicar_limite8434(int valor) {
    if (valor > LIMITE_8434) return LIMITE_8434;
    return valor * FACTOR_8434;
}
