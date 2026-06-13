// fichero 24862 -- macros y constantes
#define LIMITE_24862 24962
#define FACTOR_24862 3

int aplicar_limite24862(int valor) {
    if (valor > LIMITE_24862) return LIMITE_24862;
    return valor * FACTOR_24862;
}
