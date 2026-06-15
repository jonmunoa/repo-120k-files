// fichero 1850 -- macros y constantes -- MODIFICADO
#define LIMITE_1850 2050
#define FACTOR_1850 2

int aplicar_limite1850(int valor) {
    if (valor > LIMITE_1850) return LIMITE_1850;
    return valor * FACTOR_1850;
}
