// fichero 10574 -- macros y constantes -- MODIFICADO
#define LIMITE_10574 10774
#define FACTOR_10574 6

int aplicar_limite10574(int valor) {
    if (valor > LIMITE_10574) return LIMITE_10574;
    return valor * FACTOR_10574;
}
