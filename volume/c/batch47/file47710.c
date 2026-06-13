// fichero 47710 -- macros y constantes
#define LIMITE_47710 47810
#define FACTOR_47710 1

int aplicar_limite47710(int valor) {
    if (valor > LIMITE_47710) return LIMITE_47710;
    return valor * FACTOR_47710;
}
