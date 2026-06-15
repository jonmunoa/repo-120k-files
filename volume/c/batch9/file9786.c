// fichero 9786 -- macros y constantes -- MODIFICADO
#define LIMITE_9786 9986
#define FACTOR_9786 3

int aplicar_limite9786(int valor) {
    if (valor > LIMITE_9786) return LIMITE_9786;
    return valor * FACTOR_9786;
}
