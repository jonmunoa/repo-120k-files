// fichero 12746 -- macros y constantes -- MODIFICADO
#define LIMITE_12746 12946
#define FACTOR_12746 3

int aplicar_limite12746(int valor) {
    if (valor > LIMITE_12746) return LIMITE_12746;
    return valor * FACTOR_12746;
}
