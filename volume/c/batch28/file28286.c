// fichero 28286 -- macros y constantes
#define LIMITE_28286 28386
#define FACTOR_28286 2

int aplicar_limite28286(int valor) {
    if (valor > LIMITE_28286) return LIMITE_28286;
    return valor * FACTOR_28286;
}
