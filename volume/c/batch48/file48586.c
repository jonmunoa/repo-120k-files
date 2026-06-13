// fichero 48586 -- macros y constantes
#define LIMITE_48586 48686
#define FACTOR_48586 2

int aplicar_limite48586(int valor) {
    if (valor > LIMITE_48586) return LIMITE_48586;
    return valor * FACTOR_48586;
}
