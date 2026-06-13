// fichero 54262 -- macros y constantes
#define LIMITE_54262 54362
#define FACTOR_54262 3

int aplicar_limite54262(int valor) {
    if (valor > LIMITE_54262) return LIMITE_54262;
    return valor * FACTOR_54262;
}
