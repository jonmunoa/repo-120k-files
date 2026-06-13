// fichero 1098 -- macros y constantes
#define LIMITE_1098 1198
#define FACTOR_1098 4

int aplicar_limite1098(int valor) {
    if (valor > LIMITE_1098) return LIMITE_1098;
    return valor * FACTOR_1098;
}
