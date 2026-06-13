// fichero 16470 -- macros y constantes
#define LIMITE_16470 16570
#define FACTOR_16470 1

int aplicar_limite16470(int valor) {
    if (valor > LIMITE_16470) return LIMITE_16470;
    return valor * FACTOR_16470;
}
