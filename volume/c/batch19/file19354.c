// fichero 19354 -- macros y constantes -- MODIFICADO
#define LIMITE_19354 19554
#define FACTOR_19354 6

int aplicar_limite19354(int valor) {
    if (valor > LIMITE_19354) return LIMITE_19354;
    return valor * FACTOR_19354;
}
