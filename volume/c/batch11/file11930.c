// fichero 11930 -- macros y constantes -- MODIFICADO
#define LIMITE_11930 12130
#define FACTOR_11930 2

int aplicar_limite11930(int valor) {
    if (valor > LIMITE_11930) return LIMITE_11930;
    return valor * FACTOR_11930;
}
