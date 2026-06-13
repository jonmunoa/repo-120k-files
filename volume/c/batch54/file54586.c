// fichero 54586 -- macros y constantes
#define LIMITE_54586 54686
#define FACTOR_54586 2

int aplicar_limite54586(int valor) {
    if (valor > LIMITE_54586) return LIMITE_54586;
    return valor * FACTOR_54586;
}
