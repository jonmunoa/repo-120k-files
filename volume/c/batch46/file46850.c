// fichero 46850 -- macros y constantes
#define LIMITE_46850 46950
#define FACTOR_46850 1

int aplicar_limite46850(int valor) {
    if (valor > LIMITE_46850) return LIMITE_46850;
    return valor * FACTOR_46850;
}
