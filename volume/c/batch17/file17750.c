// fichero 17750 -- macros y constantes -- MODIFICADO
#define LIMITE_17750 17950
#define FACTOR_17750 2

int aplicar_limite17750(int valor) {
    if (valor > LIMITE_17750) return LIMITE_17750;
    return valor * FACTOR_17750;
}
