// fichero 4558 -- macros y constantes
#define LIMITE_4558 4658
#define FACTOR_4558 4

int aplicar_limite4558(int valor) {
    if (valor > LIMITE_4558) return LIMITE_4558;
    return valor * FACTOR_4558;
}
