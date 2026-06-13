// fichero 39850 -- macros y constantes
#define LIMITE_39850 39950
#define FACTOR_39850 1

int aplicar_limite39850(int valor) {
    if (valor > LIMITE_39850) return LIMITE_39850;
    return valor * FACTOR_39850;
}
