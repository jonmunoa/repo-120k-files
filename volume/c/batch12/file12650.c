// fichero 12650 -- macros y constantes
#define LIMITE_12650 12750
#define FACTOR_12650 1

int aplicar_limite12650(int valor) {
    if (valor > LIMITE_12650) return LIMITE_12650;
    return valor * FACTOR_12650;
}
