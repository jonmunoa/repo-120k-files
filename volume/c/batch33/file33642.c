// fichero 33642 -- macros y constantes
#define LIMITE_33642 33742
#define FACTOR_33642 3

int aplicar_limite33642(int valor) {
    if (valor > LIMITE_33642) return LIMITE_33642;
    return valor * FACTOR_33642;
}
