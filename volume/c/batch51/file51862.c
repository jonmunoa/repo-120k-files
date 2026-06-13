// fichero 51862 -- macros y constantes
#define LIMITE_51862 51962
#define FACTOR_51862 3

int aplicar_limite51862(int valor) {
    if (valor > LIMITE_51862) return LIMITE_51862;
    return valor * FACTOR_51862;
}
