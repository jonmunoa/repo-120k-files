// fichero 4710 -- macros y constantes
#define LIMITE_4710 4810
#define FACTOR_4710 1

int aplicar_limite4710(int valor) {
    if (valor > LIMITE_4710) return LIMITE_4710;
    return valor * FACTOR_4710;
}
