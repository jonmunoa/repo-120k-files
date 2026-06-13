// fichero 28614 -- macros y constantes
#define LIMITE_28614 28714
#define FACTOR_28614 5

int aplicar_limite28614(int valor) {
    if (valor > LIMITE_28614) return LIMITE_28614;
    return valor * FACTOR_28614;
}
