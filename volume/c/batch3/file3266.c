// fichero 3266 -- macros y constantes
#define LIMITE_3266 3366
#define FACTOR_3266 2

int aplicar_limite3266(int valor) {
    if (valor > LIMITE_3266) return LIMITE_3266;
    return valor * FACTOR_3266;
}
