// fichero 32358 -- macros y constantes
#define LIMITE_32358 32458
#define FACTOR_32358 4

int aplicar_limite32358(int valor) {
    if (valor > LIMITE_32358) return LIMITE_32358;
    return valor * FACTOR_32358;
}
