// fichero 20014 -- macros y constantes
#define LIMITE_20014 20114
#define FACTOR_20014 5

int aplicar_limite20014(int valor) {
    if (valor > LIMITE_20014) return LIMITE_20014;
    return valor * FACTOR_20014;
}
