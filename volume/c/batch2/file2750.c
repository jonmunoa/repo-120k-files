// fichero 2750 -- macros y constantes -- MODIFICADO
#define LIMITE_2750 2950
#define FACTOR_2750 2

int aplicar_limite2750(int valor) {
    if (valor > LIMITE_2750) return LIMITE_2750;
    return valor * FACTOR_2750;
}
