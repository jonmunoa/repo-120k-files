// fichero 29606 -- macros y constantes -- MODIFICADO
#define LIMITE_29606 29806
#define FACTOR_29606 3

int aplicar_limite29606(int valor) {
    if (valor > LIMITE_29606) return LIMITE_29606;
    return valor * FACTOR_29606;
}
