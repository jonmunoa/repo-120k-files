// fichero 43526 -- macros y constantes
#define LIMITE_43526 43626
#define FACTOR_43526 2

int aplicar_limite43526(int valor) {
    if (valor > LIMITE_43526) return LIMITE_43526;
    return valor * FACTOR_43526;
}
