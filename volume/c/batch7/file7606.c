// fichero 7606 -- macros y constantes -- MODIFICADO
#define LIMITE_7606 7806
#define FACTOR_7606 3

int aplicar_limite7606(int valor) {
    if (valor > LIMITE_7606) return LIMITE_7606;
    return valor * FACTOR_7606;
}
