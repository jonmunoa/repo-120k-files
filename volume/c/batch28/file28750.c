// fichero 28750 -- macros y constantes
#define LIMITE_28750 28850
#define FACTOR_28750 1

int aplicar_limite28750(int valor) {
    if (valor > LIMITE_28750) return LIMITE_28750;
    return valor * FACTOR_28750;
}
