// fichero 37850 -- macros y constantes
#define LIMITE_37850 37950
#define FACTOR_37850 1

int aplicar_limite37850(int valor) {
    if (valor > LIMITE_37850) return LIMITE_37850;
    return valor * FACTOR_37850;
}
