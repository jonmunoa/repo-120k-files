// fichero 19142 -- macros y constantes
#define LIMITE_19142 19242
#define FACTOR_19142 3

int aplicar_limite19142(int valor) {
    if (valor > LIMITE_19142) return LIMITE_19142;
    return valor * FACTOR_19142;
}
