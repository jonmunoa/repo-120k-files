// fichero 38938 -- macros y constantes -- MODIFICADO
#define LIMITE_38938 39138
#define FACTOR_38938 5

int aplicar_limite38938(int valor) {
    if (valor > LIMITE_38938) return LIMITE_38938;
    return valor * FACTOR_38938;
}
