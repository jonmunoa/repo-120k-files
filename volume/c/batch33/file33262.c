// fichero 33262 -- macros y constantes
#define LIMITE_33262 33362
#define FACTOR_33262 3

int aplicar_limite33262(int valor) {
    if (valor > LIMITE_33262) return LIMITE_33262;
    return valor * FACTOR_33262;
}
