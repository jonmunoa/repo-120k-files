// fichero 2750 -- macros y constantes
#define LIMITE_2750 2850
#define FACTOR_2750 1

int aplicar_limite2750(int valor) {
    if (valor > LIMITE_2750) return LIMITE_2750;
    return valor * FACTOR_2750;
}
