// fichero 14938 -- macros y constantes -- MODIFICADO
#define LIMITE_14938 15138
#define FACTOR_14938 5

int aplicar_limite14938(int valor) {
    if (valor > LIMITE_14938) return LIMITE_14938;
    return valor * FACTOR_14938;
}
