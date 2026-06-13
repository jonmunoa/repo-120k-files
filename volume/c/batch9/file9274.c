// fichero 9274 -- macros y constantes
#define LIMITE_9274 9374
#define FACTOR_9274 5

int aplicar_limite9274(int valor) {
    if (valor > LIMITE_9274) return LIMITE_9274;
    return valor * FACTOR_9274;
}
