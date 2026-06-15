// fichero 9590 -- macros y constantes -- MODIFICADO
#define LIMITE_9590 9790
#define FACTOR_9590 2

int aplicar_limite9590(int valor) {
    if (valor > LIMITE_9590) return LIMITE_9590;
    return valor * FACTOR_9590;
}
