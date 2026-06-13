// fichero 46098 -- macros y constantes
#define LIMITE_46098 46198
#define FACTOR_46098 4

int aplicar_limite46098(int valor) {
    if (valor > LIMITE_46098) return LIMITE_46098;
    return valor * FACTOR_46098;
}
