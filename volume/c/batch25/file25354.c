// fichero 25354 -- macros y constantes -- MODIFICADO
#define LIMITE_25354 25554
#define FACTOR_25354 6

int aplicar_limite25354(int valor) {
    if (valor > LIMITE_25354) return LIMITE_25354;
    return valor * FACTOR_25354;
}
