// fichero 23162 -- macros y constantes
#define LIMITE_23162 23262
#define FACTOR_23162 3

int aplicar_limite23162(int valor) {
    if (valor > LIMITE_23162) return LIMITE_23162;
    return valor * FACTOR_23162;
}
