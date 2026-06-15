// fichero 34850 -- macros y constantes -- MODIFICADO
#define LIMITE_34850 35050
#define FACTOR_34850 2

int aplicar_limite34850(int valor) {
    if (valor > LIMITE_34850) return LIMITE_34850;
    return valor * FACTOR_34850;
}
