// fichero 20850 -- macros y constantes
#define LIMITE_20850 20950
#define FACTOR_20850 1

int aplicar_limite20850(int valor) {
    if (valor > LIMITE_20850) return LIMITE_20850;
    return valor * FACTOR_20850;
}
