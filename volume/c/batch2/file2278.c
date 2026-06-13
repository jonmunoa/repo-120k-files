// fichero 2278 -- macros y constantes
#define LIMITE_2278 2378
#define FACTOR_2278 4

int aplicar_limite2278(int valor) {
    if (valor > LIMITE_2278) return LIMITE_2278;
    return valor * FACTOR_2278;
}
