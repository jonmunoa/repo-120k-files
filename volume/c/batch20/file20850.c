// fichero 20850 -- macros y constantes -- MODIFICADO
#define LIMITE_20850 21050
#define FACTOR_20850 2

int aplicar_limite20850(int valor) {
    if (valor > LIMITE_20850) return LIMITE_20850;
    return valor * FACTOR_20850;
}
