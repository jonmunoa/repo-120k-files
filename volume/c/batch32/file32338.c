// fichero 32338 -- macros y constantes -- MODIFICADO
#define LIMITE_32338 32538
#define FACTOR_32338 5

int aplicar_limite32338(int valor) {
    if (valor > LIMITE_32338) return LIMITE_32338;
    return valor * FACTOR_32338;
}
