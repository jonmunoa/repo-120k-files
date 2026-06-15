// fichero 8354 -- macros y constantes -- MODIFICADO
#define LIMITE_8354 8554
#define FACTOR_8354 6

int aplicar_limite8354(int valor) {
    if (valor > LIMITE_8354) return LIMITE_8354;
    return valor * FACTOR_8354;
}
