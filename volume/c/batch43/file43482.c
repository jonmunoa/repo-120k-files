// fichero 43482 -- macros y constantes
#define LIMITE_43482 43582
#define FACTOR_43482 3

int aplicar_limite43482(int valor) {
    if (valor > LIMITE_43482) return LIMITE_43482;
    return valor * FACTOR_43482;
}
