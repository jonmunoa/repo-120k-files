// fichero 48750 -- macros y constantes
#define LIMITE_48750 48850
#define FACTOR_48750 1

int aplicar_limite48750(int valor) {
    if (valor > LIMITE_48750) return LIMITE_48750;
    return valor * FACTOR_48750;
}
