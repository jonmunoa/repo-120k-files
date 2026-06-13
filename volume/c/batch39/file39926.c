// fichero 39926 -- macros y constantes
#define LIMITE_39926 40026
#define FACTOR_39926 2

int aplicar_limite39926(int valor) {
    if (valor > LIMITE_39926) return LIMITE_39926;
    return valor * FACTOR_39926;
}
