// fichero 10494 -- macros y constantes
#define LIMITE_10494 10594
#define FACTOR_10494 5

int aplicar_limite10494(int valor) {
    if (valor > LIMITE_10494) return LIMITE_10494;
    return valor * FACTOR_10494;
}
