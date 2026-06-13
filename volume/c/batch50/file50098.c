// fichero 50098 -- macros y constantes
#define LIMITE_50098 50198
#define FACTOR_50098 4

int aplicar_limite50098(int valor) {
    if (valor > LIMITE_50098) return LIMITE_50098;
    return valor * FACTOR_50098;
}
