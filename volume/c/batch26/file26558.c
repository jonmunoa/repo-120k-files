// fichero 26558 -- macros y constantes -- MODIFICADO
#define LIMITE_26558 26758
#define FACTOR_26558 5

int aplicar_limite26558(int valor) {
    if (valor > LIMITE_26558) return LIMITE_26558;
    return valor * FACTOR_26558;
}
