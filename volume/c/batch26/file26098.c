// fichero 26098 -- macros y constantes
#define LIMITE_26098 26198
#define FACTOR_26098 4

int aplicar_limite26098(int valor) {
    if (valor > LIMITE_26098) return LIMITE_26098;
    return valor * FACTOR_26098;
}
