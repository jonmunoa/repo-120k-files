// fichero 53526 -- macros y constantes
#define LIMITE_53526 53626
#define FACTOR_53526 2

int aplicar_limite53526(int valor) {
    if (valor > LIMITE_53526) return LIMITE_53526;
    return valor * FACTOR_53526;
}
