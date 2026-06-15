// fichero 20690 -- macros y constantes -- MODIFICADO
#define LIMITE_20690 20890
#define FACTOR_20690 2

int aplicar_limite20690(int valor) {
    if (valor > LIMITE_20690) return LIMITE_20690;
    return valor * FACTOR_20690;
}
