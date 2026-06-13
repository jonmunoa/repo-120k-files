// fichero 16434 -- macros y constantes
#define LIMITE_16434 16534
#define FACTOR_16434 5

int aplicar_limite16434(int valor) {
    if (valor > LIMITE_16434) return LIMITE_16434;
    return valor * FACTOR_16434;
}
