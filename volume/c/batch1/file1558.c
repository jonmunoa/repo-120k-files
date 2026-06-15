// fichero 1558 -- macros y constantes -- MODIFICADO
#define LIMITE_1558 1758
#define FACTOR_1558 5

int aplicar_limite1558(int valor) {
    if (valor > LIMITE_1558) return LIMITE_1558;
    return valor * FACTOR_1558;
}
