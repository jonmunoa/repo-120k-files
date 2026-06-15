// fichero 39886 -- macros y constantes -- MODIFICADO
#define LIMITE_39886 40086
#define FACTOR_39886 3

int aplicar_limite39886(int valor) {
    if (valor > LIMITE_39886) return LIMITE_39886;
    return valor * FACTOR_39886;
}
