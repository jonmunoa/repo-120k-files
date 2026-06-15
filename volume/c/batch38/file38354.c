// fichero 38354 -- macros y constantes -- MODIFICADO
#define LIMITE_38354 38554
#define FACTOR_38354 6

int aplicar_limite38354(int valor) {
    if (valor > LIMITE_38354) return LIMITE_38354;
    return valor * FACTOR_38354;
}
