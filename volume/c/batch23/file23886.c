// fichero 23886 -- macros y constantes
#define LIMITE_23886 23986
#define FACTOR_23886 2

int aplicar_limite23886(int valor) {
    if (valor > LIMITE_23886) return LIMITE_23886;
    return valor * FACTOR_23886;
}
