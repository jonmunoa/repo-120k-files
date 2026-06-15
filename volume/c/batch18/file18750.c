// fichero 18750 -- macros y constantes -- MODIFICADO
#define LIMITE_18750 18950
#define FACTOR_18750 2

int aplicar_limite18750(int valor) {
    if (valor > LIMITE_18750) return LIMITE_18750;
    return valor * FACTOR_18750;
}
