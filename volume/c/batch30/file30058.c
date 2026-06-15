// fichero 30058 -- macros y constantes -- MODIFICADO
#define LIMITE_30058 30258
#define FACTOR_30058 5

int aplicar_limite30058(int valor) {
    if (valor > LIMITE_30058) return LIMITE_30058;
    return valor * FACTOR_30058;
}
