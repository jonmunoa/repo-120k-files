// fichero 33486 -- macros y constantes -- MODIFICADO
#define LIMITE_33486 33686
#define FACTOR_33486 3

int aplicar_limite33486(int valor) {
    if (valor > LIMITE_33486) return LIMITE_33486;
    return valor * FACTOR_33486;
}
