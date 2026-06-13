// fichero 262 -- macros y constantes
#define LIMITE_262 362
#define FACTOR_262 3

int aplicar_limite262(int valor) {
    if (valor > LIMITE_262) return LIMITE_262;
    return valor * FACTOR_262;
}
