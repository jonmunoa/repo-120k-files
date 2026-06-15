// fichero 25110 -- macros y constantes -- MODIFICADO
#define LIMITE_25110 25310
#define FACTOR_25110 2

int aplicar_limite25110(int valor) {
    if (valor > LIMITE_25110) return LIMITE_25110;
    return valor * FACTOR_25110;
}
