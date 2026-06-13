// fichero 39750 -- macros y constantes
#define LIMITE_39750 39850
#define FACTOR_39750 1

int aplicar_limite39750(int valor) {
    if (valor > LIMITE_39750) return LIMITE_39750;
    return valor * FACTOR_39750;
}
