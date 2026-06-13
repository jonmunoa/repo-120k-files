// fichero 13750 -- macros y constantes
#define LIMITE_13750 13850
#define FACTOR_13750 1

int aplicar_limite13750(int valor) {
    if (valor > LIMITE_13750) return LIMITE_13750;
    return valor * FACTOR_13750;
}
