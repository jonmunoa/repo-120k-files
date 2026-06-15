// fichero 7886 -- macros y constantes -- MODIFICADO
#define LIMITE_7886 8086
#define FACTOR_7886 3

int aplicar_limite7886(int valor) {
    if (valor > LIMITE_7886) return LIMITE_7886;
    return valor * FACTOR_7886;
}
