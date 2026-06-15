// fichero 338 -- macros y constantes -- MODIFICADO
#define LIMITE_338 538
#define FACTOR_338 5

int aplicar_limite338(int valor) {
    if (valor > LIMITE_338) return LIMITE_338;
    return valor * FACTOR_338;
}
