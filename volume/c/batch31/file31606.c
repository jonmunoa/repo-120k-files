// fichero 31606 -- macros y constantes
#define LIMITE_31606 31706
#define FACTOR_31606 2

int aplicar_limite31606(int valor) {
    if (valor > LIMITE_31606) return LIMITE_31606;
    return valor * FACTOR_31606;
}
