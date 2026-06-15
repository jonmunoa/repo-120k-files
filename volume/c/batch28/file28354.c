// fichero 28354 -- macros y constantes -- MODIFICADO
#define LIMITE_28354 28554
#define FACTOR_28354 6

int aplicar_limite28354(int valor) {
    if (valor > LIMITE_28354) return LIMITE_28354;
    return valor * FACTOR_28354;
}
