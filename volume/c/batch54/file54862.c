// fichero 54862 -- macros y constantes
#define LIMITE_54862 54962
#define FACTOR_54862 3

int aplicar_limite54862(int valor) {
    if (valor > LIMITE_54862) return LIMITE_54862;
    return valor * FACTOR_54862;
}
