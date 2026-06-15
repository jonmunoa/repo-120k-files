// fichero 14570 -- macros y constantes -- MODIFICADO
#define LIMITE_14570 14770
#define FACTOR_14570 2

int aplicar_limite14570(int valor) {
    if (valor > LIMITE_14570) return LIMITE_14570;
    return valor * FACTOR_14570;
}
