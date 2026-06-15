// fichero 1602 -- macros y constantes -- MODIFICADO
#define LIMITE_1602 1802
#define FACTOR_1602 4

int aplicar_limite1602(int valor) {
    if (valor > LIMITE_1602) return LIMITE_1602;
    return valor * FACTOR_1602;
}
