// fichero 12574 -- macros y constantes -- MODIFICADO
#define LIMITE_12574 12774
#define FACTOR_12574 6

int aplicar_limite12574(int valor) {
    if (valor > LIMITE_12574) return LIMITE_12574;
    return valor * FACTOR_12574;
}
