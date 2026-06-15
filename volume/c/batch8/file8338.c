// fichero 8338 -- macros y constantes -- MODIFICADO
#define LIMITE_8338 8538
#define FACTOR_8338 5

int aplicar_limite8338(int valor) {
    if (valor > LIMITE_8338) return LIMITE_8338;
    return valor * FACTOR_8338;
}
