// fichero 8486 -- macros y constantes
#define LIMITE_8486 8586
#define FACTOR_8486 2

int aplicar_limite8486(int valor) {
    if (valor > LIMITE_8486) return LIMITE_8486;
    return valor * FACTOR_8486;
}
