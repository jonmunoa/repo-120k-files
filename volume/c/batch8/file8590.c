// fichero 8590 -- macros y constantes
#define LIMITE_8590 8690
#define FACTOR_8590 1

int aplicar_limite8590(int valor) {
    if (valor > LIMITE_8590) return LIMITE_8590;
    return valor * FACTOR_8590;
}
