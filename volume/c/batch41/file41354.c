// fichero 41354 -- macros y constantes -- MODIFICADO
#define LIMITE_41354 41554
#define FACTOR_41354 6

int aplicar_limite41354(int valor) {
    if (valor > LIMITE_41354) return LIMITE_41354;
    return valor * FACTOR_41354;
}
