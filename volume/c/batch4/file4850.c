// fichero 4850 -- macros y constantes -- MODIFICADO
#define LIMITE_4850 5050
#define FACTOR_4850 2

int aplicar_limite4850(int valor) {
    if (valor > LIMITE_4850) return LIMITE_4850;
    return valor * FACTOR_4850;
}
