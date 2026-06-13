// fichero 44850 -- macros y constantes
#define LIMITE_44850 44950
#define FACTOR_44850 1

int aplicar_limite44850(int valor) {
    if (valor > LIMITE_44850) return LIMITE_44850;
    return valor * FACTOR_44850;
}
