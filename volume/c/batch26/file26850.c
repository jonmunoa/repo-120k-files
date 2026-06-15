// fichero 26850 -- macros y constantes -- MODIFICADO
#define LIMITE_26850 27050
#define FACTOR_26850 2

int aplicar_limite26850(int valor) {
    if (valor > LIMITE_26850) return LIMITE_26850;
    return valor * FACTOR_26850;
}
