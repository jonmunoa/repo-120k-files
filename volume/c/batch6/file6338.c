// fichero 6338 -- macros y constantes -- MODIFICADO
#define LIMITE_6338 6538
#define FACTOR_6338 5

int aplicar_limite6338(int valor) {
    if (valor > LIMITE_6338) return LIMITE_6338;
    return valor * FACTOR_6338;
}
