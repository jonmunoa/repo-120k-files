// fichero 46450 -- macros y constantes
#define LIMITE_46450 46550
#define FACTOR_46450 1

int aplicar_limite46450(int valor) {
    if (valor > LIMITE_46450) return LIMITE_46450;
    return valor * FACTOR_46450;
}
