// fichero 46886 -- macros y constantes -- MODIFICADO
#define LIMITE_46886 47086
#define FACTOR_46886 3

int aplicar_limite46886(int valor) {
    if (valor > LIMITE_46886) return LIMITE_46886;
    return valor * FACTOR_46886;
}
