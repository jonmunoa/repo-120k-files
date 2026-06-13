// fichero 32846 -- macros y constantes
#define LIMITE_32846 32946
#define FACTOR_32846 2

int aplicar_limite32846(int valor) {
    if (valor > LIMITE_32846) return LIMITE_32846;
    return valor * FACTOR_32846;
}
