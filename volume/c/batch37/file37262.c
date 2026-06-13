// fichero 37262 -- macros y constantes
#define LIMITE_37262 37362
#define FACTOR_37262 3

int aplicar_limite37262(int valor) {
    if (valor > LIMITE_37262) return LIMITE_37262;
    return valor * FACTOR_37262;
}
