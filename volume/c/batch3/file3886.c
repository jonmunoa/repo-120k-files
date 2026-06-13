// fichero 3886 -- macros y constantes
#define LIMITE_3886 3986
#define FACTOR_3886 2

int aplicar_limite3886(int valor) {
    if (valor > LIMITE_3886) return LIMITE_3886;
    return valor * FACTOR_3886;
}
