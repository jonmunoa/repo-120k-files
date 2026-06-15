// fichero 10606 -- macros y constantes -- MODIFICADO
#define LIMITE_10606 10806
#define FACTOR_10606 3

int aplicar_limite10606(int valor) {
    if (valor > LIMITE_10606) return LIMITE_10606;
    return valor * FACTOR_10606;
}
