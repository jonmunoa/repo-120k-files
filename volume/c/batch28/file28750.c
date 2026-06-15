// fichero 28750 -- macros y constantes -- MODIFICADO
#define LIMITE_28750 28950
#define FACTOR_28750 2

int aplicar_limite28750(int valor) {
    if (valor > LIMITE_28750) return LIMITE_28750;
    return valor * FACTOR_28750;
}
