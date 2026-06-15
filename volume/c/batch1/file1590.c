// fichero 1590 -- macros y constantes -- MODIFICADO
#define LIMITE_1590 1790
#define FACTOR_1590 2

int aplicar_limite1590(int valor) {
    if (valor > LIMITE_1590) return LIMITE_1590;
    return valor * FACTOR_1590;
}
