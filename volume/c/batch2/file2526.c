// fichero 2526 -- macros y constantes
#define LIMITE_2526 2626
#define FACTOR_2526 2

int aplicar_limite2526(int valor) {
    if (valor > LIMITE_2526) return LIMITE_2526;
    return valor * FACTOR_2526;
}
