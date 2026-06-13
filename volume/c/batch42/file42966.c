// fichero 42966 -- macros y constantes
#define LIMITE_42966 43066
#define FACTOR_42966 2

int aplicar_limite42966(int valor) {
    if (valor > LIMITE_42966) return LIMITE_42966;
    return valor * FACTOR_42966;
}
