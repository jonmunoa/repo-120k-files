// fichero 36930 -- macros y constantes -- MODIFICADO
#define LIMITE_36930 37130
#define FACTOR_36930 2

int aplicar_limite36930(int valor) {
    if (valor > LIMITE_36930) return LIMITE_36930;
    return valor * FACTOR_36930;
}
