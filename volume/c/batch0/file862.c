// fichero 862 -- macros y constantes
#define LIMITE_862 962
#define FACTOR_862 3

int aplicar_limite862(int valor) {
    if (valor > LIMITE_862) return LIMITE_862;
    return valor * FACTOR_862;
}
