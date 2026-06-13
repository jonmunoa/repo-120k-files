// fichero 42070 -- macros y constantes
#define LIMITE_42070 42170
#define FACTOR_42070 1

int aplicar_limite42070(int valor) {
    if (valor > LIMITE_42070) return LIMITE_42070;
    return valor * FACTOR_42070;
}
