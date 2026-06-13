// fichero 44862 -- macros y constantes
#define LIMITE_44862 44962
#define FACTOR_44862 3

int aplicar_limite44862(int valor) {
    if (valor > LIMITE_44862) return LIMITE_44862;
    return valor * FACTOR_44862;
}
