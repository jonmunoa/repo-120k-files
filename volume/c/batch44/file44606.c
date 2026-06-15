// fichero 44606 -- macros y constantes -- MODIFICADO
#define LIMITE_44606 44806
#define FACTOR_44606 3

int aplicar_limite44606(int valor) {
    if (valor > LIMITE_44606) return LIMITE_44606;
    return valor * FACTOR_44606;
}
