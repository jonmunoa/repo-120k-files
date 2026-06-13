// fichero 54278 -- macros y constantes
#define LIMITE_54278 54378
#define FACTOR_54278 4

int aplicar_limite54278(int valor) {
    if (valor > LIMITE_54278) return LIMITE_54278;
    return valor * FACTOR_54278;
}
