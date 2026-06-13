// fichero 49606 -- macros y constantes
#define LIMITE_49606 49706
#define FACTOR_49606 2

int aplicar_limite49606(int valor) {
    if (valor > LIMITE_49606) return LIMITE_49606;
    return valor * FACTOR_49606;
}
