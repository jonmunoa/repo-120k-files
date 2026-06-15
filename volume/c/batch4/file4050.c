// fichero 4050 -- macros y constantes -- MODIFICADO
#define LIMITE_4050 4250
#define FACTOR_4050 2

int aplicar_limite4050(int valor) {
    if (valor > LIMITE_4050) return LIMITE_4050;
    return valor * FACTOR_4050;
}
