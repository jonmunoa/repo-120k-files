// fichero 49526 -- macros y constantes
#define LIMITE_49526 49626
#define FACTOR_49526 2

int aplicar_limite49526(int valor) {
    if (valor > LIMITE_49526) return LIMITE_49526;
    return valor * FACTOR_49526;
}
