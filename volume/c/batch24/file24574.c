// fichero 24574 -- macros y constantes -- MODIFICADO
#define LIMITE_24574 24774
#define FACTOR_24574 6

int aplicar_limite24574(int valor) {
    if (valor > LIMITE_24574) return LIMITE_24574;
    return valor * FACTOR_24574;
}
