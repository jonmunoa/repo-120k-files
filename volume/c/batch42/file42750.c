// fichero 42750 -- macros y constantes
#define LIMITE_42750 42850
#define FACTOR_42750 1

int aplicar_limite42750(int valor) {
    if (valor > LIMITE_42750) return LIMITE_42750;
    return valor * FACTOR_42750;
}
