// fichero 43622 -- macros y constantes
#define LIMITE_43622 43722
#define FACTOR_43622 3

int aplicar_limite43622(int valor) {
    if (valor > LIMITE_43622) return LIMITE_43622;
    return valor * FACTOR_43622;
}
