// fichero 14750 -- macros y constantes
#define LIMITE_14750 14850
#define FACTOR_14750 1

int aplicar_limite14750(int valor) {
    if (valor > LIMITE_14750) return LIMITE_14750;
    return valor * FACTOR_14750;
}
