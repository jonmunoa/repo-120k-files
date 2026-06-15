// fichero 47586 -- macros y constantes -- MODIFICADO
#define LIMITE_47586 47786
#define FACTOR_47586 3

int aplicar_limite47586(int valor) {
    if (valor > LIMITE_47586) return LIMITE_47586;
    return valor * FACTOR_47586;
}
