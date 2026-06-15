// fichero 20014 -- macros y constantes -- MODIFICADO
#define LIMITE_20014 20214
#define FACTOR_20014 6

int aplicar_limite20014(int valor) {
    if (valor > LIMITE_20014) return LIMITE_20014;
    return valor * FACTOR_20014;
}
