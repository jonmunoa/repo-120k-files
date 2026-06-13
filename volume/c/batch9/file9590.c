// fichero 9590 -- macros y constantes
#define LIMITE_9590 9690
#define FACTOR_9590 1

int aplicar_limite9590(int valor) {
    if (valor > LIMITE_9590) return LIMITE_9590;
    return valor * FACTOR_9590;
}
