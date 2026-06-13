// fichero 40610 -- macros y constantes
#define LIMITE_40610 40710
#define FACTOR_40610 1

int aplicar_limite40610(int valor) {
    if (valor > LIMITE_40610) return LIMITE_40610;
    return valor * FACTOR_40610;
}
