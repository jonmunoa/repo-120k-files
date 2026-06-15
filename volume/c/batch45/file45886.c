// fichero 45886 -- macros y constantes -- MODIFICADO
#define LIMITE_45886 46086
#define FACTOR_45886 3

int aplicar_limite45886(int valor) {
    if (valor > LIMITE_45886) return LIMITE_45886;
    return valor * FACTOR_45886;
}
