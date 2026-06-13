// fichero 47962 -- macros y constantes
#define LIMITE_47962 48062
#define FACTOR_47962 3

int aplicar_limite47962(int valor) {
    if (valor > LIMITE_47962) return LIMITE_47962;
    return valor * FACTOR_47962;
}
