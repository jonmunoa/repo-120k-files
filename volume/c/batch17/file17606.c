// fichero 17606 -- macros y constantes -- MODIFICADO
#define LIMITE_17606 17806
#define FACTOR_17606 3

int aplicar_limite17606(int valor) {
    if (valor > LIMITE_17606) return LIMITE_17606;
    return valor * FACTOR_17606;
}
