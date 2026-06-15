// fichero 40606 -- macros y constantes -- MODIFICADO
#define LIMITE_40606 40806
#define FACTOR_40606 3

int aplicar_limite40606(int valor) {
    if (valor > LIMITE_40606) return LIMITE_40606;
    return valor * FACTOR_40606;
}
