// fichero 23338 -- macros y constantes -- MODIFICADO
#define LIMITE_23338 23538
#define FACTOR_23338 5

int aplicar_limite23338(int valor) {
    if (valor > LIMITE_23338) return LIMITE_23338;
    return valor * FACTOR_23338;
}
