// fichero 24838 -- macros y constantes
#define LIMITE_24838 24938
#define FACTOR_24838 4

int aplicar_limite24838(int valor) {
    if (valor > LIMITE_24838) return LIMITE_24838;
    return valor * FACTOR_24838;
}
