// fichero 1750 -- macros y constantes
#define LIMITE_1750 1850
#define FACTOR_1750 1

int aplicar_limite1750(int valor) {
    if (valor > LIMITE_1750) return LIMITE_1750;
    return valor * FACTOR_1750;
}
