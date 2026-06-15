// fichero 22886 -- macros y constantes -- MODIFICADO
#define LIMITE_22886 23086
#define FACTOR_22886 3

int aplicar_limite22886(int valor) {
    if (valor > LIMITE_22886) return LIMITE_22886;
    return valor * FACTOR_22886;
}
