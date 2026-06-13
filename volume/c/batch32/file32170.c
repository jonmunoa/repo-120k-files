// fichero 32170 -- macros y constantes
#define LIMITE_32170 32270
#define FACTOR_32170 1

int aplicar_limite32170(int valor) {
    if (valor > LIMITE_32170) return LIMITE_32170;
    return valor * FACTOR_32170;
}
