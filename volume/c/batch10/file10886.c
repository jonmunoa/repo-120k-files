// fichero 10886 -- macros y constantes -- MODIFICADO
#define LIMITE_10886 11086
#define FACTOR_10886 3

int aplicar_limite10886(int valor) {
    if (valor > LIMITE_10886) return LIMITE_10886;
    return valor * FACTOR_10886;
}
