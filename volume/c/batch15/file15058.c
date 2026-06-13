// fichero 15058 -- macros y constantes
#define LIMITE_15058 15158
#define FACTOR_15058 4

int aplicar_limite15058(int valor) {
    if (valor > LIMITE_15058) return LIMITE_15058;
    return valor * FACTOR_15058;
}
