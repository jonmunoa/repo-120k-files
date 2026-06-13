// fichero 33486 -- macros y constantes
#define LIMITE_33486 33586
#define FACTOR_33486 2

int aplicar_limite33486(int valor) {
    if (valor > LIMITE_33486) return LIMITE_33486;
    return valor * FACTOR_33486;
}
