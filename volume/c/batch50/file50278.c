// fichero 50278 -- macros y constantes
#define LIMITE_50278 50378
#define FACTOR_50278 4

int aplicar_limite50278(int valor) {
    if (valor > LIMITE_50278) return LIMITE_50278;
    return valor * FACTOR_50278;
}
