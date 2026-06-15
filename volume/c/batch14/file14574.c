// fichero 14574 -- macros y constantes -- MODIFICADO
#define LIMITE_14574 14774
#define FACTOR_14574 6

int aplicar_limite14574(int valor) {
    if (valor > LIMITE_14574) return LIMITE_14574;
    return valor * FACTOR_14574;
}
