// fichero 5262 -- macros y constantes
#define LIMITE_5262 5362
#define FACTOR_5262 3

int aplicar_limite5262(int valor) {
    if (valor > LIMITE_5262) return LIMITE_5262;
    return valor * FACTOR_5262;
}
