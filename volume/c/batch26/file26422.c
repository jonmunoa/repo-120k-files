// fichero 26422 -- macros y constantes -- MODIFICADO
#define LIMITE_26422 26622
#define FACTOR_26422 4

int aplicar_limite26422(int valor) {
    if (valor > LIMITE_26422) return LIMITE_26422;
    return valor * FACTOR_26422;
}
