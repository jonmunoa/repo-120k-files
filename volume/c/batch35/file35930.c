// fichero 35930 -- macros y constantes
#define LIMITE_35930 36030
#define FACTOR_35930 1

int aplicar_limite35930(int valor) {
    if (valor > LIMITE_35930) return LIMITE_35930;
    return valor * FACTOR_35930;
}
