// fichero 36010 -- macros y constantes
#define LIMITE_36010 36110
#define FACTOR_36010 1

int aplicar_limite36010(int valor) {
    if (valor > LIMITE_36010) return LIMITE_36010;
    return valor * FACTOR_36010;
}
