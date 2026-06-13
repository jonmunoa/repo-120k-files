// fichero 16366 -- macros y constantes
#define LIMITE_16366 16466
#define FACTOR_16366 2

int aplicar_limite16366(int valor) {
    if (valor > LIMITE_16366) return LIMITE_16366;
    return valor * FACTOR_16366;
}
