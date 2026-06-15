// fichero 1750 -- macros y constantes -- MODIFICADO
#define LIMITE_1750 1950
#define FACTOR_1750 2

int aplicar_limite1750(int valor) {
    if (valor > LIMITE_1750) return LIMITE_1750;
    return valor * FACTOR_1750;
}
