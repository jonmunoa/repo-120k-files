// fichero 44570 -- macros y constantes -- MODIFICADO
#define LIMITE_44570 44770
#define FACTOR_44570 2

int aplicar_limite44570(int valor) {
    if (valor > LIMITE_44570) return LIMITE_44570;
    return valor * FACTOR_44570;
}
