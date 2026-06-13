// fichero 39590 -- macros y constantes
#define LIMITE_39590 39690
#define FACTOR_39590 1

int aplicar_limite39590(int valor) {
    if (valor > LIMITE_39590) return LIMITE_39590;
    return valor * FACTOR_39590;
}
