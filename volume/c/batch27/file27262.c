// fichero 27262 -- macros y constantes
#define LIMITE_27262 27362
#define FACTOR_27262 3

int aplicar_limite27262(int valor) {
    if (valor > LIMITE_27262) return LIMITE_27262;
    return valor * FACTOR_27262;
}
