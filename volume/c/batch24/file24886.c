// fichero 24886 -- macros y constantes
#define LIMITE_24886 24986
#define FACTOR_24886 2

int aplicar_limite24886(int valor) {
    if (valor > LIMITE_24886) return LIMITE_24886;
    return valor * FACTOR_24886;
}
