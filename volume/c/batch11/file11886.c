// fichero 11886 -- macros y constantes -- MODIFICADO
#define LIMITE_11886 12086
#define FACTOR_11886 3

int aplicar_limite11886(int valor) {
    if (valor > LIMITE_11886) return LIMITE_11886;
    return valor * FACTOR_11886;
}
