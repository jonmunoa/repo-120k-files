// fichero 8886 -- macros y constantes -- MODIFICADO
#define LIMITE_8886 9086
#define FACTOR_8886 3

int aplicar_limite8886(int valor) {
    if (valor > LIMITE_8886) return LIMITE_8886;
    return valor * FACTOR_8886;
}
