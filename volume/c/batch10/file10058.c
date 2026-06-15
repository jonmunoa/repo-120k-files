// fichero 10058 -- macros y constantes -- MODIFICADO
#define LIMITE_10058 10258
#define FACTOR_10058 5

int aplicar_limite10058(int valor) {
    if (valor > LIMITE_10058) return LIMITE_10058;
    return valor * FACTOR_10058;
}
