// fichero 22926 -- macros y constantes
#define LIMITE_22926 23026
#define FACTOR_22926 2

int aplicar_limite22926(int valor) {
    if (valor > LIMITE_22926) return LIMITE_22926;
    return valor * FACTOR_22926;
}
