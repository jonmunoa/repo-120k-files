// fichero 22098 -- macros y constantes
#define LIMITE_22098 22198
#define FACTOR_22098 4

int aplicar_limite22098(int valor) {
    if (valor > LIMITE_22098) return LIMITE_22098;
    return valor * FACTOR_22098;
}
