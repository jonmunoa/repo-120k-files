// fichero 15526 -- macros y constantes
#define LIMITE_15526 15626
#define FACTOR_15526 2

int aplicar_limite15526(int valor) {
    if (valor > LIMITE_15526) return LIMITE_15526;
    return valor * FACTOR_15526;
}
