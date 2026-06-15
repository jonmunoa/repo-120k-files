// fichero 44586 -- macros y constantes -- MODIFICADO
#define LIMITE_44586 44786
#define FACTOR_44586 3

int aplicar_limite44586(int valor) {
    if (valor > LIMITE_44586) return LIMITE_44586;
    return valor * FACTOR_44586;
}
