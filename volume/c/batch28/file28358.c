// fichero 28358 -- macros y constantes
#define LIMITE_28358 28458
#define FACTOR_28358 4

int aplicar_limite28358(int valor) {
    if (valor > LIMITE_28358) return LIMITE_28358;
    return valor * FACTOR_28358;
}
