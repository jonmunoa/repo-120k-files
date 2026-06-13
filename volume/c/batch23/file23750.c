// fichero 23750 -- macros y constantes
#define LIMITE_23750 23850
#define FACTOR_23750 1

int aplicar_limite23750(int valor) {
    if (valor > LIMITE_23750) return LIMITE_23750;
    return valor * FACTOR_23750;
}
