// fichero 49606 -- macros y constantes -- MODIFICADO
#define LIMITE_49606 49806
#define FACTOR_49606 3

int aplicar_limite49606(int valor) {
    if (valor > LIMITE_49606) return LIMITE_49606;
    return valor * FACTOR_49606;
}
