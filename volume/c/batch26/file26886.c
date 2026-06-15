// fichero 26886 -- macros y constantes -- MODIFICADO
#define LIMITE_26886 27086
#define FACTOR_26886 3

int aplicar_limite26886(int valor) {
    if (valor > LIMITE_26886) return LIMITE_26886;
    return valor * FACTOR_26886;
}
