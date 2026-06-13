// fichero 21406 -- macros y constantes
#define LIMITE_21406 21506
#define FACTOR_21406 2

int aplicar_limite21406(int valor) {
    if (valor > LIMITE_21406) return LIMITE_21406;
    return valor * FACTOR_21406;
}
