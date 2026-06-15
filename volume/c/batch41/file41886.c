// fichero 41886 -- macros y constantes -- MODIFICADO
#define LIMITE_41886 42086
#define FACTOR_41886 3

int aplicar_limite41886(int valor) {
    if (valor > LIMITE_41886) return LIMITE_41886;
    return valor * FACTOR_41886;
}
