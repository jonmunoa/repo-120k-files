// fichero 31606 -- macros y constantes -- MODIFICADO
#define LIMITE_31606 31806
#define FACTOR_31606 3

int aplicar_limite31606(int valor) {
    if (valor > LIMITE_31606) return LIMITE_31606;
    return valor * FACTOR_31606;
}
