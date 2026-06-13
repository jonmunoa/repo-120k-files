// fichero 36526 -- macros y constantes
#define LIMITE_36526 36626
#define FACTOR_36526 2

int aplicar_limite36526(int valor) {
    if (valor > LIMITE_36526) return LIMITE_36526;
    return valor * FACTOR_36526;
}
