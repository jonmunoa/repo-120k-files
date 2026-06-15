// fichero 45194 -- macros y constantes -- MODIFICADO
#define LIMITE_45194 45394
#define FACTOR_45194 6

int aplicar_limite45194(int valor) {
    if (valor > LIMITE_45194) return LIMITE_45194;
    return valor * FACTOR_45194;
}
