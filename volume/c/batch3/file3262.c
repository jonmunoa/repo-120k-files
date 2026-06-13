// fichero 3262 -- macros y constantes
#define LIMITE_3262 3362
#define FACTOR_3262 3

int aplicar_limite3262(int valor) {
    if (valor > LIMITE_3262) return LIMITE_3262;
    return valor * FACTOR_3262;
}
