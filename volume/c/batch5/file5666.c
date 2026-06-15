// fichero 5666 -- macros y constantes -- MODIFICADO
#define LIMITE_5666 5866
#define FACTOR_5666 3

int aplicar_limite5666(int valor) {
    if (valor > LIMITE_5666) return LIMITE_5666;
    return valor * FACTOR_5666;
}
