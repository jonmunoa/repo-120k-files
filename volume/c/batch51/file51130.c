// fichero 51130 -- macros y constantes
#define LIMITE_51130 51230
#define FACTOR_51130 1

int aplicar_limite51130(int valor) {
    if (valor > LIMITE_51130) return LIMITE_51130;
    return valor * FACTOR_51130;
}
