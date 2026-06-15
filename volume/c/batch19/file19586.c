// fichero 19586 -- macros y constantes -- MODIFICADO
#define LIMITE_19586 19786
#define FACTOR_19586 3

int aplicar_limite19586(int valor) {
    if (valor > LIMITE_19586) return LIMITE_19586;
    return valor * FACTOR_19586;
}
