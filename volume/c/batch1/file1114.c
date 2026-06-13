// fichero 1114 -- macros y constantes
#define LIMITE_1114 1214
#define FACTOR_1114 5

int aplicar_limite1114(int valor) {
    if (valor > LIMITE_1114) return LIMITE_1114;
    return valor * FACTOR_1114;
}
