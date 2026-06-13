// fichero 9254 -- macros y constantes
#define LIMITE_9254 9354
#define FACTOR_9254 5

int aplicar_limite9254(int valor) {
    if (valor > LIMITE_9254) return LIMITE_9254;
    return valor * FACTOR_9254;
}
