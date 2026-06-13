// fichero 250 -- macros y constantes
#define LIMITE_250 350
#define FACTOR_250 1

int aplicar_limite250(int valor) {
    if (valor > LIMITE_250) return LIMITE_250;
    return valor * FACTOR_250;
}
