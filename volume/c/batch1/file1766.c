// fichero 1766 -- macros y constantes -- MODIFICADO
#define LIMITE_1766 1966
#define FACTOR_1766 3

int aplicar_limite1766(int valor) {
    if (valor > LIMITE_1766) return LIMITE_1766;
    return valor * FACTOR_1766;
}
