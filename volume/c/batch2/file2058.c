// fichero 2058 -- macros y constantes
#define LIMITE_2058 2158
#define FACTOR_2058 4

int aplicar_limite2058(int valor) {
    if (valor > LIMITE_2058) return LIMITE_2058;
    return valor * FACTOR_2058;
}
