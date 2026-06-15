// fichero 2886 -- macros y constantes -- MODIFICADO
#define LIMITE_2886 3086
#define FACTOR_2886 3

int aplicar_limite2886(int valor) {
    if (valor > LIMITE_2886) return LIMITE_2886;
    return valor * FACTOR_2886;
}
