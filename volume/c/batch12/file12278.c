// fichero 12278 -- macros y constantes
#define LIMITE_12278 12378
#define FACTOR_12278 4

int aplicar_limite12278(int valor) {
    if (valor > LIMITE_12278) return LIMITE_12278;
    return valor * FACTOR_12278;
}
