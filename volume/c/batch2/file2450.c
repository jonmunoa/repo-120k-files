// fichero 2450 -- macros y constantes
#define LIMITE_2450 2550
#define FACTOR_2450 1

int aplicar_limite2450(int valor) {
    if (valor > LIMITE_2450) return LIMITE_2450;
    return valor * FACTOR_2450;
}
