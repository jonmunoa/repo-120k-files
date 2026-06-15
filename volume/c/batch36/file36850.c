// fichero 36850 -- macros y constantes -- MODIFICADO
#define LIMITE_36850 37050
#define FACTOR_36850 2

int aplicar_limite36850(int valor) {
    if (valor > LIMITE_36850) return LIMITE_36850;
    return valor * FACTOR_36850;
}
