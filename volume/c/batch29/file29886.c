// fichero 29886 -- macros y constantes
#define LIMITE_29886 29986
#define FACTOR_29886 2

int aplicar_limite29886(int valor) {
    if (valor > LIMITE_29886) return LIMITE_29886;
    return valor * FACTOR_29886;
}
