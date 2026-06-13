// fichero 21526 -- macros y constantes
#define LIMITE_21526 21626
#define FACTOR_21526 2

int aplicar_limite21526(int valor) {
    if (valor > LIMITE_21526) return LIMITE_21526;
    return valor * FACTOR_21526;
}
