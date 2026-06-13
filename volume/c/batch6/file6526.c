// fichero 6526 -- macros y constantes
#define LIMITE_6526 6626
#define FACTOR_6526 2

int aplicar_limite6526(int valor) {
    if (valor > LIMITE_6526) return LIMITE_6526;
    return valor * FACTOR_6526;
}
