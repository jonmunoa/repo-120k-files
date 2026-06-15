// fichero 20354 -- macros y constantes -- MODIFICADO
#define LIMITE_20354 20554
#define FACTOR_20354 6

int aplicar_limite20354(int valor) {
    if (valor > LIMITE_20354) return LIMITE_20354;
    return valor * FACTOR_20354;
}
