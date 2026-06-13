// fichero 39886 -- macros y constantes
#define LIMITE_39886 39986
#define FACTOR_39886 2

int aplicar_limite39886(int valor) {
    if (valor > LIMITE_39886) return LIMITE_39886;
    return valor * FACTOR_39886;
}
