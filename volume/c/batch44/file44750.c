// fichero 44750 -- macros y constantes
#define LIMITE_44750 44850
#define FACTOR_44750 1

int aplicar_limite44750(int valor) {
    if (valor > LIMITE_44750) return LIMITE_44750;
    return valor * FACTOR_44750;
}
