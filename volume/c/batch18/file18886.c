// fichero 18886 -- macros y constantes -- MODIFICADO
#define LIMITE_18886 19086
#define FACTOR_18886 3

int aplicar_limite18886(int valor) {
    if (valor > LIMITE_18886) return LIMITE_18886;
    return valor * FACTOR_18886;
}
