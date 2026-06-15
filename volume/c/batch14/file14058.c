// fichero 14058 -- macros y constantes -- MODIFICADO
#define LIMITE_14058 14258
#define FACTOR_14058 5

int aplicar_limite14058(int valor) {
    if (valor > LIMITE_14058) return LIMITE_14058;
    return valor * FACTOR_14058;
}
