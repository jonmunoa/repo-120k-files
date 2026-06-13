// fichero 42350 -- macros y constantes
#define LIMITE_42350 42450
#define FACTOR_42350 1

int aplicar_limite42350(int valor) {
    if (valor > LIMITE_42350) return LIMITE_42350;
    return valor * FACTOR_42350;
}
