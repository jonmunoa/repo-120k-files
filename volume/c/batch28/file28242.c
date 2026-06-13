// fichero 28242 -- macros y constantes
#define LIMITE_28242 28342
#define FACTOR_28242 3

int aplicar_limite28242(int valor) {
    if (valor > LIMITE_28242) return LIMITE_28242;
    return valor * FACTOR_28242;
}
