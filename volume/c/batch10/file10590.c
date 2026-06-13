// fichero 10590 -- macros y constantes
#define LIMITE_10590 10690
#define FACTOR_10590 1

int aplicar_limite10590(int valor) {
    if (valor > LIMITE_10590) return LIMITE_10590;
    return valor * FACTOR_10590;
}
