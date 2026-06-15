// fichero 16470 -- macros y constantes -- MODIFICADO
#define LIMITE_16470 16670
#define FACTOR_16470 2

int aplicar_limite16470(int valor) {
    if (valor > LIMITE_16470) return LIMITE_16470;
    return valor * FACTOR_16470;
}
