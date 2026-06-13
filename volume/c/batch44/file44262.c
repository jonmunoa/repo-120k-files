// fichero 44262 -- macros y constantes
#define LIMITE_44262 44362
#define FACTOR_44262 3

int aplicar_limite44262(int valor) {
    if (valor > LIMITE_44262) return LIMITE_44262;
    return valor * FACTOR_44262;
}
