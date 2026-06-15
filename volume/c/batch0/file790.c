// fichero 790 -- macros y constantes -- MODIFICADO
#define LIMITE_790 990
#define FACTOR_790 2

int aplicar_limite790(int valor) {
    if (valor > LIMITE_790) return LIMITE_790;
    return valor * FACTOR_790;
}
