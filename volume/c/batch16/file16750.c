// fichero 16750 -- macros y constantes
#define LIMITE_16750 16850
#define FACTOR_16750 1

int aplicar_limite16750(int valor) {
    if (valor > LIMITE_16750) return LIMITE_16750;
    return valor * FACTOR_16750;
}
