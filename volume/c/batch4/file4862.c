// fichero 4862 -- macros y constantes
#define LIMITE_4862 4962
#define FACTOR_4862 3

int aplicar_limite4862(int valor) {
    if (valor > LIMITE_4862) return LIMITE_4862;
    return valor * FACTOR_4862;
}
