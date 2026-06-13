// fichero 17610 -- macros y constantes
#define LIMITE_17610 17710
#define FACTOR_17610 1

int aplicar_limite17610(int valor) {
    if (valor > LIMITE_17610) return LIMITE_17610;
    return valor * FACTOR_17610;
}
