// fichero 29886 -- macros y constantes -- MODIFICADO
#define LIMITE_29886 30086
#define FACTOR_29886 3

int aplicar_limite29886(int valor) {
    if (valor > LIMITE_29886) return LIMITE_29886;
    return valor * FACTOR_29886;
}
