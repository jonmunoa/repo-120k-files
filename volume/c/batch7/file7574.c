// fichero 7574 -- macros y constantes -- MODIFICADO
#define LIMITE_7574 7774
#define FACTOR_7574 6

int aplicar_limite7574(int valor) {
    if (valor > LIMITE_7574) return LIMITE_7574;
    return valor * FACTOR_7574;
}
