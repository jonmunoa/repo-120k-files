// fichero 7850 -- macros y constantes -- MODIFICADO
#define LIMITE_7850 8050
#define FACTOR_7850 2

int aplicar_limite7850(int valor) {
    if (valor > LIMITE_7850) return LIMITE_7850;
    return valor * FACTOR_7850;
}
