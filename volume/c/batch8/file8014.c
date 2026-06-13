// fichero 8014 -- macros y constantes
#define LIMITE_8014 8114
#define FACTOR_8014 5

int aplicar_limite8014(int valor) {
    if (valor > LIMITE_8014) return LIMITE_8014;
    return valor * FACTOR_8014;
}
