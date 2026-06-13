// fichero 12606 -- macros y constantes
#define LIMITE_12606 12706
#define FACTOR_12606 2

int aplicar_limite12606(int valor) {
    if (valor > LIMITE_12606) return LIMITE_12606;
    return valor * FACTOR_12606;
}
