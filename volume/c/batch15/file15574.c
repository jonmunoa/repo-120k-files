// fichero 15574 -- macros y constantes -- MODIFICADO
#define LIMITE_15574 15774
#define FACTOR_15574 6

int aplicar_limite15574(int valor) {
    if (valor > LIMITE_15574) return LIMITE_15574;
    return valor * FACTOR_15574;
}
