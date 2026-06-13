// fichero 39526 -- macros y constantes
#define LIMITE_39526 39626
#define FACTOR_39526 2

int aplicar_limite39526(int valor) {
    if (valor > LIMITE_39526) return LIMITE_39526;
    return valor * FACTOR_39526;
}
