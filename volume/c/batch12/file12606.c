// fichero 12606 -- macros y constantes -- MODIFICADO
#define LIMITE_12606 12806
#define FACTOR_12606 3

int aplicar_limite12606(int valor) {
    if (valor > LIMITE_12606) return LIMITE_12606;
    return valor * FACTOR_12606;
}
