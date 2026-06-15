// fichero 4558 -- macros y constantes -- MODIFICADO
#define LIMITE_4558 4758
#define FACTOR_4558 5

int aplicar_limite4558(int valor) {
    if (valor > LIMITE_4558) return LIMITE_4558;
    return valor * FACTOR_4558;
}
