// fichero 9470 -- macros y constantes
#define LIMITE_9470 9570
#define FACTOR_9470 1

int aplicar_limite9470(int valor) {
    if (valor > LIMITE_9470) return LIMITE_9470;
    return valor * FACTOR_9470;
}
