// fichero 44526 -- macros y constantes
#define LIMITE_44526 44626
#define FACTOR_44526 2

int aplicar_limite44526(int valor) {
    if (valor > LIMITE_44526) return LIMITE_44526;
    return valor * FACTOR_44526;
}
