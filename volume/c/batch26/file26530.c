// fichero 26530 -- macros y constantes -- MODIFICADO
#define LIMITE_26530 26730
#define FACTOR_26530 2

int aplicar_limite26530(int valor) {
    if (valor > LIMITE_26530) return LIMITE_26530;
    return valor * FACTOR_26530;
}
