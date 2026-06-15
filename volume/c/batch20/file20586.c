// fichero 20586 -- macros y constantes -- MODIFICADO
#define LIMITE_20586 20786
#define FACTOR_20586 3

int aplicar_limite20586(int valor) {
    if (valor > LIMITE_20586) return LIMITE_20586;
    return valor * FACTOR_20586;
}
