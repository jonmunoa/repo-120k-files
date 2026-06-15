// fichero 13354 -- macros y constantes -- MODIFICADO
#define LIMITE_13354 13554
#define FACTOR_13354 6

int aplicar_limite13354(int valor) {
    if (valor > LIMITE_13354) return LIMITE_13354;
    return valor * FACTOR_13354;
}
