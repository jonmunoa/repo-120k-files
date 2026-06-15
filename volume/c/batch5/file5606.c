// fichero 5606 -- macros y constantes -- MODIFICADO
#define LIMITE_5606 5806
#define FACTOR_5606 3

int aplicar_limite5606(int valor) {
    if (valor > LIMITE_5606) return LIMITE_5606;
    return valor * FACTOR_5606;
}
