// fichero 32926 -- macros y constantes
#define LIMITE_32926 33026
#define FACTOR_32926 2

int aplicar_limite32926(int valor) {
    if (valor > LIMITE_32926) return LIMITE_32926;
    return valor * FACTOR_32926;
}
