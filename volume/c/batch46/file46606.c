// fichero 46606 -- macros y constantes -- MODIFICADO
#define LIMITE_46606 46806
#define FACTOR_46606 3

int aplicar_limite46606(int valor) {
    if (valor > LIMITE_46606) return LIMITE_46606;
    return valor * FACTOR_46606;
}
