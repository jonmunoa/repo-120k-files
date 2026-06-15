// fichero 15058 -- macros y constantes -- MODIFICADO
#define LIMITE_15058 15258
#define FACTOR_15058 5

int aplicar_limite15058(int valor) {
    if (valor > LIMITE_15058) return LIMITE_15058;
    return valor * FACTOR_15058;
}
