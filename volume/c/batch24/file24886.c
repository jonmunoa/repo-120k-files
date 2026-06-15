// fichero 24886 -- macros y constantes -- MODIFICADO
#define LIMITE_24886 25086
#define FACTOR_24886 3

int aplicar_limite24886(int valor) {
    if (valor > LIMITE_24886) return LIMITE_24886;
    return valor * FACTOR_24886;
}
