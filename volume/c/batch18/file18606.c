// fichero 18606 -- macros y constantes -- MODIFICADO
#define LIMITE_18606 18806
#define FACTOR_18606 3

int aplicar_limite18606(int valor) {
    if (valor > LIMITE_18606) return LIMITE_18606;
    return valor * FACTOR_18606;
}
