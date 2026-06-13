// fichero 10926 -- macros y constantes
#define LIMITE_10926 11026
#define FACTOR_10926 2

int aplicar_limite10926(int valor) {
    if (valor > LIMITE_10926) return LIMITE_10926;
    return valor * FACTOR_10926;
}
