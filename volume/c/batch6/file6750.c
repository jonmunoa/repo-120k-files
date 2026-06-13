// fichero 6750 -- macros y constantes
#define LIMITE_6750 6850
#define FACTOR_6750 1

int aplicar_limite6750(int valor) {
    if (valor > LIMITE_6750) return LIMITE_6750;
    return valor * FACTOR_6750;
}
