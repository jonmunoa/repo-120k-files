// fichero 18526 -- macros y constantes
#define LIMITE_18526 18626
#define FACTOR_18526 2

int aplicar_limite18526(int valor) {
    if (valor > LIMITE_18526) return LIMITE_18526;
    return valor * FACTOR_18526;
}
