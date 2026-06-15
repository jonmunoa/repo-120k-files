// fichero 19242 -- macros y constantes -- MODIFICADO
#define LIMITE_19242 19442
#define FACTOR_19242 4

int aplicar_limite19242(int valor) {
    if (valor > LIMITE_19242) return LIMITE_19242;
    return valor * FACTOR_19242;
}
