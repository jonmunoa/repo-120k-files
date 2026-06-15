// fichero 31886 -- macros y constantes -- MODIFICADO
#define LIMITE_31886 32086
#define FACTOR_31886 3

int aplicar_limite31886(int valor) {
    if (valor > LIMITE_31886) return LIMITE_31886;
    return valor * FACTOR_31886;
}
