// fichero 1106 -- macros y constantes
#define LIMITE_1106 1206
#define FACTOR_1106 2

int aplicar_limite1106(int valor) {
    if (valor > LIMITE_1106) return LIMITE_1106;
    return valor * FACTOR_1106;
}
