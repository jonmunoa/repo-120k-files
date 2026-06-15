// fichero 17886 -- macros y constantes -- MODIFICADO
#define LIMITE_17886 18086
#define FACTOR_17886 3

int aplicar_limite17886(int valor) {
    if (valor > LIMITE_17886) return LIMITE_17886;
    return valor * FACTOR_17886;
}
