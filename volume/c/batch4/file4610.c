// fichero 4610 -- macros y constantes
#define LIMITE_4610 4710
#define FACTOR_4610 1

int aplicar_limite4610(int valor) {
    if (valor > LIMITE_4610) return LIMITE_4610;
    return valor * FACTOR_4610;
}
