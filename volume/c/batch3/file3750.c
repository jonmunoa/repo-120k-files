// fichero 3750 -- macros y constantes
#define LIMITE_3750 3850
#define FACTOR_3750 1

int aplicar_limite3750(int valor) {
    if (valor > LIMITE_3750) return LIMITE_3750;
    return valor * FACTOR_3750;
}
