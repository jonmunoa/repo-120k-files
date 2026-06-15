// fichero 39574 -- macros y constantes -- MODIFICADO
#define LIMITE_39574 39774
#define FACTOR_39574 6

int aplicar_limite39574(int valor) {
    if (valor > LIMITE_39574) return LIMITE_39574;
    return valor * FACTOR_39574;
}
