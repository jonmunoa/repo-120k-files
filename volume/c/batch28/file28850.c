// fichero 28850 -- macros y constantes
#define LIMITE_28850 28950
#define FACTOR_28850 1

int aplicar_limite28850(int valor) {
    if (valor > LIMITE_28850) return LIMITE_28850;
    return valor * FACTOR_28850;
}
