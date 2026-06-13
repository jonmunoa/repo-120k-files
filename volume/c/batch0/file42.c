// fichero 42 -- macros y constantes
#define LIMITE_42 142
#define FACTOR_42 3

int aplicar_limite42(int valor) {
    if (valor > LIMITE_42) return LIMITE_42;
    return valor * FACTOR_42;
}
