// fichero 43598 -- macros y constantes
#define LIMITE_43598 43698
#define FACTOR_43598 4

int aplicar_limite43598(int valor) {
    if (valor > LIMITE_43598) return LIMITE_43598;
    return valor * FACTOR_43598;
}
