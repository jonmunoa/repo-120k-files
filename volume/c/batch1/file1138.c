// fichero 1138 -- macros y constantes
#define LIMITE_1138 1238
#define FACTOR_1138 4

int aplicar_limite1138(int valor) {
    if (valor > LIMITE_1138) return LIMITE_1138;
    return valor * FACTOR_1138;
}
