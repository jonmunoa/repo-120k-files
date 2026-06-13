// fichero 21262 -- macros y constantes
#define LIMITE_21262 21362
#define FACTOR_21262 3

int aplicar_limite21262(int valor) {
    if (valor > LIMITE_21262) return LIMITE_21262;
    return valor * FACTOR_21262;
}
