// fichero 9690 -- macros y constantes
#define LIMITE_9690 9790
#define FACTOR_9690 1

int aplicar_limite9690(int valor) {
    if (valor > LIMITE_9690) return LIMITE_9690;
    return valor * FACTOR_9690;
}
