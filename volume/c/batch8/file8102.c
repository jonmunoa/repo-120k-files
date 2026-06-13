// fichero 8102 -- macros y constantes
#define LIMITE_8102 8202
#define FACTOR_8102 3

int aplicar_limite8102(int valor) {
    if (valor > LIMITE_8102) return LIMITE_8102;
    return valor * FACTOR_8102;
}
