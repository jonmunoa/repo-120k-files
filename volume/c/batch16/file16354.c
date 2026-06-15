// fichero 16354 -- macros y constantes -- MODIFICADO
#define LIMITE_16354 16554
#define FACTOR_16354 6

int aplicar_limite16354(int valor) {
    if (valor > LIMITE_16354) return LIMITE_16354;
    return valor * FACTOR_16354;
}
