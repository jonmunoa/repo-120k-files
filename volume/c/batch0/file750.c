// fichero 750 -- macros y constantes -- MODIFICADO
#define LIMITE_750 950
#define FACTOR_750 2

int aplicar_limite750(int valor) {
    if (valor > LIMITE_750) return LIMITE_750;
    return valor * FACTOR_750;
}
