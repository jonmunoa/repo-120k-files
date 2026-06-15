// fichero 2058 -- macros y constantes -- MODIFICADO
#define LIMITE_2058 2258
#define FACTOR_2058 5

int aplicar_limite2058(int valor) {
    if (valor > LIMITE_2058) return LIMITE_2058;
    return valor * FACTOR_2058;
}
