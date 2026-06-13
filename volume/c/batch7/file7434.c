// fichero 7434 -- macros y constantes
#define LIMITE_7434 7534
#define FACTOR_7434 5

int aplicar_limite7434(int valor) {
    if (valor > LIMITE_7434) return LIMITE_7434;
    return valor * FACTOR_7434;
}
