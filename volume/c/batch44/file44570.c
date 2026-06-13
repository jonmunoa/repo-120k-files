// fichero 44570 -- macros y constantes
#define LIMITE_44570 44670
#define FACTOR_44570 1

int aplicar_limite44570(int valor) {
    if (valor > LIMITE_44570) return LIMITE_44570;
    return valor * FACTOR_44570;
}
