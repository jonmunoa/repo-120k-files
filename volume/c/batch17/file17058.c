// fichero 17058 -- macros y constantes -- MODIFICADO
#define LIMITE_17058 17258
#define FACTOR_17058 5

int aplicar_limite17058(int valor) {
    if (valor > LIMITE_17058) return LIMITE_17058;
    return valor * FACTOR_17058;
}
