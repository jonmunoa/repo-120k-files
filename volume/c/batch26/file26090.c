// fichero 26090 -- macros y constantes -- MODIFICADO
#define LIMITE_26090 26290
#define FACTOR_26090 2

int aplicar_limite26090(int valor) {
    if (valor > LIMITE_26090) return LIMITE_26090;
    return valor * FACTOR_26090;
}
