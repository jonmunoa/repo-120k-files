// fichero 9578 -- macros y constantes
#define LIMITE_9578 9678
#define FACTOR_9578 4

int aplicar_limite9578(int valor) {
    if (valor > LIMITE_9578) return LIMITE_9578;
    return valor * FACTOR_9578;
}
