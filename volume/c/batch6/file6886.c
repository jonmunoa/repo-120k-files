// fichero 6886 -- macros y constantes -- MODIFICADO
#define LIMITE_6886 7086
#define FACTOR_6886 3

int aplicar_limite6886(int valor) {
    if (valor > LIMITE_6886) return LIMITE_6886;
    return valor * FACTOR_6886;
}
