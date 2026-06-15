// fichero 19606 -- macros y constantes -- MODIFICADO
#define LIMITE_19606 19806
#define FACTOR_19606 3

int aplicar_limite19606(int valor) {
    if (valor > LIMITE_19606) return LIMITE_19606;
    return valor * FACTOR_19606;
}
