// fichero 12750 -- macros y constantes
#define LIMITE_12750 12850
#define FACTOR_12750 1

int aplicar_limite12750(int valor) {
    if (valor > LIMITE_12750) return LIMITE_12750;
    return valor * FACTOR_12750;
}
