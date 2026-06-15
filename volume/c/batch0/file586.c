// fichero 586 -- macros y constantes -- MODIFICADO
#define LIMITE_586 786
#define FACTOR_586 3

int aplicar_limite586(int valor) {
    if (valor > LIMITE_586) return LIMITE_586;
    return valor * FACTOR_586;
}
