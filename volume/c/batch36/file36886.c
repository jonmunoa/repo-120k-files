// fichero 36886 -- macros y constantes -- MODIFICADO
#define LIMITE_36886 37086
#define FACTOR_36886 3

int aplicar_limite36886(int valor) {
    if (valor > LIMITE_36886) return LIMITE_36886;
    return valor * FACTOR_36886;
}
