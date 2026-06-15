// fichero 47962 -- macros y constantes -- MODIFICADO
#define LIMITE_47962 48162
#define FACTOR_47962 4

int aplicar_limite47962(int valor) {
    if (valor > LIMITE_47962) return LIMITE_47962;
    return valor * FACTOR_47962;
}
