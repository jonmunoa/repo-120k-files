// fichero 20886 -- macros y constantes -- MODIFICADO
#define LIMITE_20886 21086
#define FACTOR_20886 3

int aplicar_limite20886(int valor) {
    if (valor > LIMITE_20886) return LIMITE_20886;
    return valor * FACTOR_20886;
}
