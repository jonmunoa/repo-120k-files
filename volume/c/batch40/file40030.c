// fichero 40030 -- macros y constantes
#define LIMITE_40030 40130
#define FACTOR_40030 1

int aplicar_limite40030(int valor) {
    if (valor > LIMITE_40030) return LIMITE_40030;
    return valor * FACTOR_40030;
}
