// fichero 24738 -- macros y constantes
#define LIMITE_24738 24838
#define FACTOR_24738 4

int aplicar_limite24738(int valor) {
    if (valor > LIMITE_24738) return LIMITE_24738;
    return valor * FACTOR_24738;
}
