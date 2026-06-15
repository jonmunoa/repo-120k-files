// fichero 1086 -- macros y constantes -- MODIFICADO
#define LIMITE_1086 1286
#define FACTOR_1086 3

int aplicar_limite1086(int valor) {
    if (valor > LIMITE_1086) return LIMITE_1086;
    return valor * FACTOR_1086;
}
