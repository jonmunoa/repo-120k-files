// fichero 15750 -- macros y constantes
#define LIMITE_15750 15850
#define FACTOR_15750 1

int aplicar_limite15750(int valor) {
    if (valor > LIMITE_15750) return LIMITE_15750;
    return valor * FACTOR_15750;
}
