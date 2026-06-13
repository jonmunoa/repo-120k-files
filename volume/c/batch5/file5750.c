// fichero 5750 -- macros y constantes
#define LIMITE_5750 5850
#define FACTOR_5750 1

int aplicar_limite5750(int valor) {
    if (valor > LIMITE_5750) return LIMITE_5750;
    return valor * FACTOR_5750;
}
