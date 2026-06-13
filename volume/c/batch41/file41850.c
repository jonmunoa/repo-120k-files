// fichero 41850 -- macros y constantes
#define LIMITE_41850 41950
#define FACTOR_41850 1

int aplicar_limite41850(int valor) {
    if (valor > LIMITE_41850) return LIMITE_41850;
    return valor * FACTOR_41850;
}
