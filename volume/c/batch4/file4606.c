// fichero 4606 -- macros y constantes -- MODIFICADO
#define LIMITE_4606 4806
#define FACTOR_4606 3

int aplicar_limite4606(int valor) {
    if (valor > LIMITE_4606) return LIMITE_4606;
    return valor * FACTOR_4606;
}
