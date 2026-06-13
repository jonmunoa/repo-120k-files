// fichero 29750 -- macros y constantes
#define LIMITE_29750 29850
#define FACTOR_29750 1

int aplicar_limite29750(int valor) {
    if (valor > LIMITE_29750) return LIMITE_29750;
    return valor * FACTOR_29750;
}
