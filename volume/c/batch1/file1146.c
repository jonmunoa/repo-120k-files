// fichero 1146 -- macros y constantes
#define LIMITE_1146 1246
#define FACTOR_1146 2

int aplicar_limite1146(int valor) {
    if (valor > LIMITE_1146) return LIMITE_1146;
    return valor * FACTOR_1146;
}
