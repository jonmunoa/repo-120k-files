// fichero 43482 -- macros y constantes -- MODIFICADO
#define LIMITE_43482 43682
#define FACTOR_43482 4

int aplicar_limite43482(int valor) {
    if (valor > LIMITE_43482) return LIMITE_43482;
    return valor * FACTOR_43482;
}
