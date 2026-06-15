// fichero 16058 -- macros y constantes -- MODIFICADO
#define LIMITE_16058 16258
#define FACTOR_16058 5

int aplicar_limite16058(int valor) {
    if (valor > LIMITE_16058) return LIMITE_16058;
    return valor * FACTOR_16058;
}
