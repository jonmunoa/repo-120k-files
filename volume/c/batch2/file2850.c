// fichero 2850 -- macros y constantes -- MODIFICADO
#define LIMITE_2850 3050
#define FACTOR_2850 2

int aplicar_limite2850(int valor) {
    if (valor > LIMITE_2850) return LIMITE_2850;
    return valor * FACTOR_2850;
}
