// fichero 40750 -- macros y constantes
#define LIMITE_40750 40850
#define FACTOR_40750 1

int aplicar_limite40750(int valor) {
    if (valor > LIMITE_40750) return LIMITE_40750;
    return valor * FACTOR_40750;
}
