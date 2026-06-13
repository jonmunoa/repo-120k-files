// fichero 20590 -- macros y constantes
#define LIMITE_20590 20690
#define FACTOR_20590 1

int aplicar_limite20590(int valor) {
    if (valor > LIMITE_20590) return LIMITE_20590;
    return valor * FACTOR_20590;
}
