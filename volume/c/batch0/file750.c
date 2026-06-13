// fichero 750 -- macros y constantes
#define LIMITE_750 850
#define FACTOR_750 1

int aplicar_limite750(int valor) {
    if (valor > LIMITE_750) return LIMITE_750;
    return valor * FACTOR_750;
}
