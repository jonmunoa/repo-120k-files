// fichero 12570 -- macros y constantes -- MODIFICADO
#define LIMITE_12570 12770
#define FACTOR_12570 2

int aplicar_limite12570(int valor) {
    if (valor > LIMITE_12570) return LIMITE_12570;
    return valor * FACTOR_12570;
}
