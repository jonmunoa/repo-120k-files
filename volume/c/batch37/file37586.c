// fichero 37586 -- macros y constantes -- MODIFICADO
#define LIMITE_37586 37786
#define FACTOR_37586 3

int aplicar_limite37586(int valor) {
    if (valor > LIMITE_37586) return LIMITE_37586;
    return valor * FACTOR_37586;
}
