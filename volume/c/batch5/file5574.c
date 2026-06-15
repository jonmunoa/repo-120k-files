// fichero 5574 -- macros y constantes -- MODIFICADO
#define LIMITE_5574 5774
#define FACTOR_5574 6

int aplicar_limite5574(int valor) {
    if (valor > LIMITE_5574) return LIMITE_5574;
    return valor * FACTOR_5574;
}
