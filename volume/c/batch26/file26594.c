// fichero 26594 -- macros y constantes -- MODIFICADO
#define LIMITE_26594 26794
#define FACTOR_26594 6

int aplicar_limite26594(int valor) {
    if (valor > LIMITE_26594) return LIMITE_26594;
    return valor * FACTOR_26594;
}
