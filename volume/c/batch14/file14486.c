// fichero 14486 -- macros y constantes
#define LIMITE_14486 14586
#define FACTOR_14486 2

int aplicar_limite14486(int valor) {
    if (valor > LIMITE_14486) return LIMITE_14486;
    return valor * FACTOR_14486;
}
