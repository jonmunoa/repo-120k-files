// fichero 54830 -- macros y constantes
#define LIMITE_54830 54930
#define FACTOR_54830 1

int aplicar_limite54830(int valor) {
    if (valor > LIMITE_54830) return LIMITE_54830;
    return valor * FACTOR_54830;
}
