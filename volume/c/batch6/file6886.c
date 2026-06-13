// fichero 6886 -- macros y constantes
#define LIMITE_6886 6986
#define FACTOR_6886 2

int aplicar_limite6886(int valor) {
    if (valor > LIMITE_6886) return LIMITE_6886;
    return valor * FACTOR_6886;
}
