// fichero 6494 -- macros y constantes
#define LIMITE_6494 6594
#define FACTOR_6494 5

int aplicar_limite6494(int valor) {
    if (valor > LIMITE_6494) return LIMITE_6494;
    return valor * FACTOR_6494;
}
