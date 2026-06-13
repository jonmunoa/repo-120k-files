// fichero 41162 -- macros y constantes
#define LIMITE_41162 41262
#define FACTOR_41162 3

int aplicar_limite41162(int valor) {
    if (valor > LIMITE_41162) return LIMITE_41162;
    return valor * FACTOR_41162;
}
