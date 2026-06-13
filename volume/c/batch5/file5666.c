// fichero 5666 -- macros y constantes
#define LIMITE_5666 5766
#define FACTOR_5666 2

int aplicar_limite5666(int valor) {
    if (valor > LIMITE_5666) return LIMITE_5666;
    return valor * FACTOR_5666;
}
