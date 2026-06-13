// fichero 1086 -- macros y constantes
#define LIMITE_1086 1186
#define FACTOR_1086 2

int aplicar_limite1086(int valor) {
    if (valor > LIMITE_1086) return LIMITE_1086;
    return valor * FACTOR_1086;
}
