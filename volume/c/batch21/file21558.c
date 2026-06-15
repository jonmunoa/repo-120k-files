// fichero 21558 -- macros y constantes -- MODIFICADO
#define LIMITE_21558 21758
#define FACTOR_21558 5

int aplicar_limite21558(int valor) {
    if (valor > LIMITE_21558) return LIMITE_21558;
    return valor * FACTOR_21558;
}
