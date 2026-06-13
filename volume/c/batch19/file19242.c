// fichero 19242 -- macros y constantes
#define LIMITE_19242 19342
#define FACTOR_19242 3

int aplicar_limite19242(int valor) {
    if (valor > LIMITE_19242) return LIMITE_19242;
    return valor * FACTOR_19242;
}
