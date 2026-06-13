// fichero 34886 -- macros y constantes
#define LIMITE_34886 34986
#define FACTOR_34886 2

int aplicar_limite34886(int valor) {
    if (valor > LIMITE_34886) return LIMITE_34886;
    return valor * FACTOR_34886;
}
