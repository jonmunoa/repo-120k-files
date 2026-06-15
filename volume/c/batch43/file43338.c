// fichero 43338 -- macros y constantes -- MODIFICADO
#define LIMITE_43338 43538
#define FACTOR_43338 5

int aplicar_limite43338(int valor) {
    if (valor > LIMITE_43338) return LIMITE_43338;
    return valor * FACTOR_43338;
}
