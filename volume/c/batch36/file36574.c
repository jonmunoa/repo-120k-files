// fichero 36574 -- macros y constantes -- MODIFICADO
#define LIMITE_36574 36774
#define FACTOR_36574 6

int aplicar_limite36574(int valor) {
    if (valor > LIMITE_36574) return LIMITE_36574;
    return valor * FACTOR_36574;
}
