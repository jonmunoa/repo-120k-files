// fichero 9486 -- macros y constantes
#define LIMITE_9486 9586
#define FACTOR_9486 2

int aplicar_limite9486(int valor) {
    if (valor > LIMITE_9486) return LIMITE_9486;
    return valor * FACTOR_9486;
}
