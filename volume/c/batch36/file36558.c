// fichero 36558 -- macros y constantes -- MODIFICADO
#define LIMITE_36558 36758
#define FACTOR_36558 5

int aplicar_limite36558(int valor) {
    if (valor > LIMITE_36558) return LIMITE_36558;
    return valor * FACTOR_36558;
}
