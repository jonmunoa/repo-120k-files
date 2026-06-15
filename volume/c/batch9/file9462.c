// fichero 9462 -- macros y constantes -- MODIFICADO
#define LIMITE_9462 9662
#define FACTOR_9462 4

int aplicar_limite9462(int valor) {
    if (valor > LIMITE_9462) return LIMITE_9462;
    return valor * FACTOR_9462;
}
