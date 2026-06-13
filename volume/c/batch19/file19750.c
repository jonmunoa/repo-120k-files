// fichero 19750 -- macros y constantes
#define LIMITE_19750 19850
#define FACTOR_19750 1

int aplicar_limite19750(int valor) {
    if (valor > LIMITE_19750) return LIMITE_19750;
    return valor * FACTOR_19750;
}
