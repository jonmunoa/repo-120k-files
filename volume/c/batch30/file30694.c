// fichero 30694 -- macros y constantes
#define LIMITE_30694 30794
#define FACTOR_30694 5

int aplicar_limite30694(int valor) {
    if (valor > LIMITE_30694) return LIMITE_30694;
    return valor * FACTOR_30694;
}
