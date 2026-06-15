// fichero 13750 -- macros y constantes -- MODIFICADO
#define LIMITE_13750 13950
#define FACTOR_13750 2

int aplicar_limite13750(int valor) {
    if (valor > LIMITE_13750) return LIMITE_13750;
    return valor * FACTOR_13750;
}
