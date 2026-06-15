// fichero 26342 -- macros y constantes -- MODIFICADO
#define LIMITE_26342 26542
#define FACTOR_26342 4

int aplicar_limite26342(int valor) {
    if (valor > LIMITE_26342) return LIMITE_26342;
    return valor * FACTOR_26342;
}
