// fichero 48586 -- macros y constantes -- MODIFICADO
#define LIMITE_48586 48786
#define FACTOR_48586 3

int aplicar_limite48586(int valor) {
    if (valor > LIMITE_48586) return LIMITE_48586;
    return valor * FACTOR_48586;
}
