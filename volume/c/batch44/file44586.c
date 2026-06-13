// fichero 44586 -- macros y constantes
#define LIMITE_44586 44686
#define FACTOR_44586 2

int aplicar_limite44586(int valor) {
    if (valor > LIMITE_44586) return LIMITE_44586;
    return valor * FACTOR_44586;
}
