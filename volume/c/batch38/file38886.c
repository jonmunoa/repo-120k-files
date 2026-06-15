// fichero 38886 -- macros y constantes -- MODIFICADO
#define LIMITE_38886 39086
#define FACTOR_38886 3

int aplicar_limite38886(int valor) {
    if (valor > LIMITE_38886) return LIMITE_38886;
    return valor * FACTOR_38886;
}
