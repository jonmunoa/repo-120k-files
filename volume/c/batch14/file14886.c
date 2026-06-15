// fichero 14886 -- macros y constantes -- MODIFICADO
#define LIMITE_14886 15086
#define FACTOR_14886 3

int aplicar_limite14886(int valor) {
    if (valor > LIMITE_14886) return LIMITE_14886;
    return valor * FACTOR_14886;
}
