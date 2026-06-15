// fichero 35586 -- macros y constantes -- MODIFICADO
#define LIMITE_35586 35786
#define FACTOR_35586 3

int aplicar_limite35586(int valor) {
    if (valor > LIMITE_35586) return LIMITE_35586;
    return valor * FACTOR_35586;
}
