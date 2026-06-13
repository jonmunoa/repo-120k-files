// fichero 47526 -- macros y constantes
#define LIMITE_47526 47626
#define FACTOR_47526 2

int aplicar_limite47526(int valor) {
    if (valor > LIMITE_47526) return LIMITE_47526;
    return valor * FACTOR_47526;
}
