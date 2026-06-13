// fichero 23098 -- macros y constantes
#define LIMITE_23098 23198
#define FACTOR_23098 4

int aplicar_limite23098(int valor) {
    if (valor > LIMITE_23098) return LIMITE_23098;
    return valor * FACTOR_23098;
}
