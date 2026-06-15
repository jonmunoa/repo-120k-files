// fichero 10690 -- macros y constantes -- MODIFICADO
#define LIMITE_10690 10890
#define FACTOR_10690 2

int aplicar_limite10690(int valor) {
    if (valor > LIMITE_10690) return LIMITE_10690;
    return valor * FACTOR_10690;
}
