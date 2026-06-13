// fichero 8098 -- macros y constantes
#define LIMITE_8098 8198
#define FACTOR_8098 4

int aplicar_limite8098(int valor) {
    if (valor > LIMITE_8098) return LIMITE_8098;
    return valor * FACTOR_8098;
}
