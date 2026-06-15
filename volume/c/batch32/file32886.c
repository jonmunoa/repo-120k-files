// fichero 32886 -- macros y constantes -- MODIFICADO
#define LIMITE_32886 33086
#define FACTOR_32886 3

int aplicar_limite32886(int valor) {
    if (valor > LIMITE_32886) return LIMITE_32886;
    return valor * FACTOR_32886;
}
