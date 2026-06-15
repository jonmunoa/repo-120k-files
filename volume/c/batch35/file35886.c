// fichero 35886 -- macros y constantes -- MODIFICADO
#define LIMITE_35886 36086
#define FACTOR_35886 3

int aplicar_limite35886(int valor) {
    if (valor > LIMITE_35886) return LIMITE_35886;
    return valor * FACTOR_35886;
}
