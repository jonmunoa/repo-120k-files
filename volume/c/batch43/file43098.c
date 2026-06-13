// fichero 43098 -- macros y constantes
#define LIMITE_43098 43198
#define FACTOR_43098 4

int aplicar_limite43098(int valor) {
    if (valor > LIMITE_43098) return LIMITE_43098;
    return valor * FACTOR_43098;
}
