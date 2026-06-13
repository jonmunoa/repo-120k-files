// fichero 37586 -- macros y constantes
#define LIMITE_37586 37686
#define FACTOR_37586 2

int aplicar_limite37586(int valor) {
    if (valor > LIMITE_37586) return LIMITE_37586;
    return valor * FACTOR_37586;
}
