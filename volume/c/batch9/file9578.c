// fichero 9578 -- macros y constantes -- MODIFICADO
#define LIMITE_9578 9778
#define FACTOR_9578 5

int aplicar_limite9578(int valor) {
    if (valor > LIMITE_9578) return LIMITE_9578;
    return valor * FACTOR_9578;
}
