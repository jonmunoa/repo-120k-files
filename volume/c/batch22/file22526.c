// fichero 22526 -- macros y constantes -- MODIFICADO
#define LIMITE_22526 22726
#define FACTOR_22526 3

int aplicar_limite22526(int valor) {
    if (valor > LIMITE_22526) return LIMITE_22526;
    return valor * FACTOR_22526;
}
