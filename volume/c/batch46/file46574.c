// fichero 46574 -- macros y constantes -- MODIFICADO
#define LIMITE_46574 46774
#define FACTOR_46574 6

int aplicar_limite46574(int valor) {
    if (valor > LIMITE_46574) return LIMITE_46574;
    return valor * FACTOR_46574;
}
