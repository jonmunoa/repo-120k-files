// fichero 8526 -- macros y constantes
#define LIMITE_8526 8626
#define FACTOR_8526 2

int aplicar_limite8526(int valor) {
    if (valor > LIMITE_8526) return LIMITE_8526;
    return valor * FACTOR_8526;
}
