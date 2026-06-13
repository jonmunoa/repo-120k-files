// fichero 6862 -- macros y constantes
#define LIMITE_6862 6962
#define FACTOR_6862 3

int aplicar_limite6862(int valor) {
    if (valor > LIMITE_6862) return LIMITE_6862;
    return valor * FACTOR_6862;
}
