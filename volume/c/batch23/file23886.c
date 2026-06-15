// fichero 23886 -- macros y constantes -- MODIFICADO
#define LIMITE_23886 24086
#define FACTOR_23886 3

int aplicar_limite23886(int valor) {
    if (valor > LIMITE_23886) return LIMITE_23886;
    return valor * FACTOR_23886;
}
