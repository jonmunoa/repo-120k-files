// fichero 31886 -- macros y constantes
#define LIMITE_31886 31986
#define FACTOR_31886 2

int aplicar_limite31886(int valor) {
    if (valor > LIMITE_31886) return LIMITE_31886;
    return valor * FACTOR_31886;
}
