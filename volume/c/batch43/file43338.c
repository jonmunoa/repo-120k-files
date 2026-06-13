// fichero 43338 -- macros y constantes
#define LIMITE_43338 43438
#define FACTOR_43338 4

int aplicar_limite43338(int valor) {
    if (valor > LIMITE_43338) return LIMITE_43338;
    return valor * FACTOR_43338;
}
