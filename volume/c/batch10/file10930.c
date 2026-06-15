// fichero 10930 -- macros y constantes -- MODIFICADO
#define LIMITE_10930 11130
#define FACTOR_10930 2

int aplicar_limite10930(int valor) {
    if (valor > LIMITE_10930) return LIMITE_10930;
    return valor * FACTOR_10930;
}
