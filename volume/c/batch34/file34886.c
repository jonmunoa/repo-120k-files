// fichero 34886 -- macros y constantes -- MODIFICADO
#define LIMITE_34886 35086
#define FACTOR_34886 3

int aplicar_limite34886(int valor) {
    if (valor > LIMITE_34886) return LIMITE_34886;
    return valor * FACTOR_34886;
}
