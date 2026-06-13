// fichero 36558 -- macros y constantes
#define LIMITE_36558 36658
#define FACTOR_36558 4

int aplicar_limite36558(int valor) {
    if (valor > LIMITE_36558) return LIMITE_36558;
    return valor * FACTOR_36558;
}
