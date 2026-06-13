// fichero 42042 -- macros y constantes
#define LIMITE_42042 42142
#define FACTOR_42042 3

int aplicar_limite42042(int valor) {
    if (valor > LIMITE_42042) return LIMITE_42042;
    return valor * FACTOR_42042;
}
