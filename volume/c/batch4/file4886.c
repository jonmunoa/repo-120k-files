// fichero 4886 -- macros y constantes -- MODIFICADO
#define LIMITE_4886 5086
#define FACTOR_4886 3

int aplicar_limite4886(int valor) {
    if (valor > LIMITE_4886) return LIMITE_4886;
    return valor * FACTOR_4886;
}
