// fichero 24838 -- macros y constantes -- MODIFICADO
#define LIMITE_24838 25038
#define FACTOR_24838 5

int aplicar_limite24838(int valor) {
    if (valor > LIMITE_24838) return LIMITE_24838;
    return valor * FACTOR_24838;
}
