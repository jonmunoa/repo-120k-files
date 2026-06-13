// fichero 22490 -- macros y constantes
#define LIMITE_22490 22590
#define FACTOR_22490 1

int aplicar_limite22490(int valor) {
    if (valor > LIMITE_22490) return LIMITE_22490;
    return valor * FACTOR_22490;
}
