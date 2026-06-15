// fichero 14686 -- macros y constantes -- MODIFICADO
#define LIMITE_14686 14886
#define FACTOR_14686 3

int aplicar_limite14686(int valor) {
    if (valor > LIMITE_14686) return LIMITE_14686;
    return valor * FACTOR_14686;
}
