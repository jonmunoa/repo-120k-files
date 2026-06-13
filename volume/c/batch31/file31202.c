// fichero 31202 -- macros y constantes
#define LIMITE_31202 31302
#define FACTOR_31202 3

int aplicar_limite31202(int valor) {
    if (valor > LIMITE_31202) return LIMITE_31202;
    return valor * FACTOR_31202;
}
