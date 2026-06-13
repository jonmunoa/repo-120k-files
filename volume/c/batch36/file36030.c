// fichero 36030 -- macros y constantes
#define LIMITE_36030 36130
#define FACTOR_36030 1

int aplicar_limite36030(int valor) {
    if (valor > LIMITE_36030) return LIMITE_36030;
    return valor * FACTOR_36030;
}
