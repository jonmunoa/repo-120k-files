// fichero 43118 -- macros y constantes
#define LIMITE_43118 43218
#define FACTOR_43118 4

int aplicar_limite43118(int valor) {
    if (valor > LIMITE_43118) return LIMITE_43118;
    return valor * FACTOR_43118;
}
