// fichero 38886 -- macros y constantes
#define LIMITE_38886 38986
#define FACTOR_38886 2

int aplicar_limite38886(int valor) {
    if (valor > LIMITE_38886) return LIMITE_38886;
    return valor * FACTOR_38886;
}
