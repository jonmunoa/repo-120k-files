// fichero 14738 -- macros y constantes -- MODIFICADO
#define LIMITE_14738 14938
#define FACTOR_14738 5

int aplicar_limite14738(int valor) {
    if (valor > LIMITE_14738) return LIMITE_14738;
    return valor * FACTOR_14738;
}
