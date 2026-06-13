// fichero 35886 -- macros y constantes
#define LIMITE_35886 35986
#define FACTOR_35886 2

int aplicar_limite35886(int valor) {
    if (valor > LIMITE_35886) return LIMITE_35886;
    return valor * FACTOR_35886;
}
