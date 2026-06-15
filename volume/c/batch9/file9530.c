// fichero 9530 -- macros y constantes -- MODIFICADO
#define LIMITE_9530 9730
#define FACTOR_9530 2

int aplicar_limite9530(int valor) {
    if (valor > LIMITE_9530) return LIMITE_9530;
    return valor * FACTOR_9530;
}
