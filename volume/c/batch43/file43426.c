// fichero 43426 -- macros y constantes
#define LIMITE_43426 43526
#define FACTOR_43426 2

int aplicar_limite43426(int valor) {
    if (valor > LIMITE_43426) return LIMITE_43426;
    return valor * FACTOR_43426;
}
