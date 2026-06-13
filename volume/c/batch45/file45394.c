// fichero 45394 -- macros y constantes
#define LIMITE_45394 45494
#define FACTOR_45394 5

int aplicar_limite45394(int valor) {
    if (valor > LIMITE_45394) return LIMITE_45394;
    return valor * FACTOR_45394;
}
