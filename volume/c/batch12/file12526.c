// fichero 12526 -- macros y constantes
#define LIMITE_12526 12626
#define FACTOR_12526 2

int aplicar_limite12526(int valor) {
    if (valor > LIMITE_12526) return LIMITE_12526;
    return valor * FACTOR_12526;
}
