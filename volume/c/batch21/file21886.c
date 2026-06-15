// fichero 21886 -- macros y constantes -- MODIFICADO
#define LIMITE_21886 22086
#define FACTOR_21886 3

int aplicar_limite21886(int valor) {
    if (valor > LIMITE_21886) return LIMITE_21886;
    return valor * FACTOR_21886;
}
