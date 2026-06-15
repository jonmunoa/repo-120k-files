// fichero 14750 -- macros y constantes -- MODIFICADO
#define LIMITE_14750 14950
#define FACTOR_14750 2

int aplicar_limite14750(int valor) {
    if (valor > LIMITE_14750) return LIMITE_14750;
    return valor * FACTOR_14750;
}
