// fichero 9518 -- macros y constantes
#define LIMITE_9518 9618
#define FACTOR_9518 4

int aplicar_limite9518(int valor) {
    if (valor > LIMITE_9518) return LIMITE_9518;
    return valor * FACTOR_9518;
}
