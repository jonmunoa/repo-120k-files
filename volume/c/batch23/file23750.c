// fichero 23750 -- macros y constantes -- MODIFICADO
#define LIMITE_23750 23950
#define FACTOR_23750 2

int aplicar_limite23750(int valor) {
    if (valor > LIMITE_23750) return LIMITE_23750;
    return valor * FACTOR_23750;
}
