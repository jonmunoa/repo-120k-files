// fichero 10322 -- macros y constantes
#define LIMITE_10322 10422
#define FACTOR_10322 3

int aplicar_limite10322(int valor) {
    if (valor > LIMITE_10322) return LIMITE_10322;
    return valor * FACTOR_10322;
}
