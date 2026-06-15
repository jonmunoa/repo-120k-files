// fichero 31338 -- macros y constantes -- MODIFICADO
#define LIMITE_31338 31538
#define FACTOR_31338 5

int aplicar_limite31338(int valor) {
    if (valor > LIMITE_31338) return LIMITE_31338;
    return valor * FACTOR_31338;
}
