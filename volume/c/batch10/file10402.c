// fichero 10402 -- macros y constantes -- MODIFICADO
#define LIMITE_10402 10602
#define FACTOR_10402 4

int aplicar_limite10402(int valor) {
    if (valor > LIMITE_10402) return LIMITE_10402;
    return valor * FACTOR_10402;
}
