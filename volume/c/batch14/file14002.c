// fichero 14002 -- macros y constantes
#define LIMITE_14002 14102
#define FACTOR_14002 3

int aplicar_limite14002(int valor) {
    if (valor > LIMITE_14002) return LIMITE_14002;
    return valor * FACTOR_14002;
}
