// fichero 3750 -- macros y constantes -- MODIFICADO
#define LIMITE_3750 3950
#define FACTOR_3750 2

int aplicar_limite3750(int valor) {
    if (valor > LIMITE_3750) return LIMITE_3750;
    return valor * FACTOR_3750;
}
