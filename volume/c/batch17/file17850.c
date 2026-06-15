// fichero 17850 -- macros y constantes -- MODIFICADO
#define LIMITE_17850 18050
#define FACTOR_17850 2

int aplicar_limite17850(int valor) {
    if (valor > LIMITE_17850) return LIMITE_17850;
    return valor * FACTOR_17850;
}
