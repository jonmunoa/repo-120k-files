// fichero 14838 -- macros y constantes
#define LIMITE_14838 14938
#define FACTOR_14838 4

int aplicar_limite14838(int valor) {
    if (valor > LIMITE_14838) return LIMITE_14838;
    return valor * FACTOR_14838;
}
