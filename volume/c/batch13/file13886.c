// fichero 13886 -- macros y constantes -- MODIFICADO
#define LIMITE_13886 14086
#define FACTOR_13886 3

int aplicar_limite13886(int valor) {
    if (valor > LIMITE_13886) return LIMITE_13886;
    return valor * FACTOR_13886;
}
