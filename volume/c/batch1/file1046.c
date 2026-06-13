// fichero 1046 -- macros y constantes
#define LIMITE_1046 1146
#define FACTOR_1046 2

int aplicar_limite1046(int valor) {
    if (valor > LIMITE_1046) return LIMITE_1046;
    return valor * FACTOR_1046;
}
