// fichero 9014 -- macros y constantes -- MODIFICADO
#define LIMITE_9014 9214
#define FACTOR_9014 6

int aplicar_limite9014(int valor) {
    if (valor > LIMITE_9014) return LIMITE_9014;
    return valor * FACTOR_9014;
}
