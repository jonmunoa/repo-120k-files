// fichero 23862 -- macros y constantes
#define LIMITE_23862 23962
#define FACTOR_23862 3

int aplicar_limite23862(int valor) {
    if (valor > LIMITE_23862) return LIMITE_23862;
    return valor * FACTOR_23862;
}
