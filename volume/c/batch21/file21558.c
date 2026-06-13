// fichero 21558 -- macros y constantes
#define LIMITE_21558 21658
#define FACTOR_21558 4

int aplicar_limite21558(int valor) {
    if (valor > LIMITE_21558) return LIMITE_21558;
    return valor * FACTOR_21558;
}
