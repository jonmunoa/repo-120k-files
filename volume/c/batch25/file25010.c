// fichero 25010 -- macros y constantes
#define LIMITE_25010 25110
#define FACTOR_25010 1

int aplicar_limite25010(int valor) {
    if (valor > LIMITE_25010) return LIMITE_25010;
    return valor * FACTOR_25010;
}
