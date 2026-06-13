// fichero 12098 -- macros y constantes
#define LIMITE_12098 12198
#define FACTOR_12098 4

int aplicar_limite12098(int valor) {
    if (valor > LIMITE_12098) return LIMITE_12098;
    return valor * FACTOR_12098;
}
