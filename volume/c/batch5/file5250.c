// fichero 5250 -- macros y constantes
#define LIMITE_5250 5350
#define FACTOR_5250 1

int aplicar_limite5250(int valor) {
    if (valor > LIMITE_5250) return LIMITE_5250;
    return valor * FACTOR_5250;
}
