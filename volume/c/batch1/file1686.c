// fichero 1686 -- macros y constantes -- MODIFICADO
#define LIMITE_1686 1886
#define FACTOR_1686 3

int aplicar_limite1686(int valor) {
    if (valor > LIMITE_1686) return LIMITE_1686;
    return valor * FACTOR_1686;
}
