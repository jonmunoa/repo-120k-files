// fichero 7990 -- macros y constantes
#define LIMITE_7990 8090
#define FACTOR_7990 1

int aplicar_limite7990(int valor) {
    if (valor > LIMITE_7990) return LIMITE_7990;
    return valor * FACTOR_7990;
}
