// fichero 3282 -- macros y constantes
#define LIMITE_3282 3382
#define FACTOR_3282 3

int aplicar_limite3282(int valor) {
    if (valor > LIMITE_3282) return LIMITE_3282;
    return valor * FACTOR_3282;
}
