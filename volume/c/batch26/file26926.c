// fichero 26926 -- macros y constantes
#define LIMITE_26926 27026
#define FACTOR_26926 2

int aplicar_limite26926(int valor) {
    if (valor > LIMITE_26926) return LIMITE_26926;
    return valor * FACTOR_26926;
}
