// fichero 32578 -- macros y constantes
#define LIMITE_32578 32678
#define FACTOR_32578 4

int aplicar_limite32578(int valor) {
    if (valor > LIMITE_32578) return LIMITE_32578;
    return valor * FACTOR_32578;
}
