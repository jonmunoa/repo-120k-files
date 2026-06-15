// fichero 32850 -- macros y constantes -- MODIFICADO
#define LIMITE_32850 33050
#define FACTOR_32850 2

int aplicar_limite32850(int valor) {
    if (valor > LIMITE_32850) return LIMITE_32850;
    return valor * FACTOR_32850;
}
