// fichero 45394 -- macros y constantes -- MODIFICADO
#define LIMITE_45394 45594
#define FACTOR_45394 6

int aplicar_limite45394(int valor) {
    if (valor > LIMITE_45394) return LIMITE_45394;
    return valor * FACTOR_45394;
}
