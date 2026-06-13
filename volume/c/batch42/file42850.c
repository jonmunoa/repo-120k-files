// fichero 42850 -- macros y constantes
#define LIMITE_42850 42950
#define FACTOR_42850 1

int aplicar_limite42850(int valor) {
    if (valor > LIMITE_42850) return LIMITE_42850;
    return valor * FACTOR_42850;
}
