// fichero 35930 -- macros y constantes -- MODIFICADO
#define LIMITE_35930 36130
#define FACTOR_35930 2

int aplicar_limite35930(int valor) {
    if (valor > LIMITE_35930) return LIMITE_35930;
    return valor * FACTOR_35930;
}
