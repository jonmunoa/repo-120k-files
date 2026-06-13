// fichero 39630 -- macros y constantes
#define LIMITE_39630 39730
#define FACTOR_39630 1

int aplicar_limite39630(int valor) {
    if (valor > LIMITE_39630) return LIMITE_39630;
    return valor * FACTOR_39630;
}
