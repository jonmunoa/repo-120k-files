// fichero 40750 -- macros y constantes -- MODIFICADO
#define LIMITE_40750 40950
#define FACTOR_40750 2

int aplicar_limite40750(int valor) {
    if (valor > LIMITE_40750) return LIMITE_40750;
    return valor * FACTOR_40750;
}
