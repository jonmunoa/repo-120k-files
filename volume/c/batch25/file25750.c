// fichero 25750 -- macros y constantes
#define LIMITE_25750 25850
#define FACTOR_25750 1

int aplicar_limite25750(int valor) {
    if (valor > LIMITE_25750) return LIMITE_25750;
    return valor * FACTOR_25750;
}
