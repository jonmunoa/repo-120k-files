// fichero 25606 -- macros y constantes -- MODIFICADO
#define LIMITE_25606 25806
#define FACTOR_25606 3

int aplicar_limite25606(int valor) {
    if (valor > LIMITE_25606) return LIMITE_25606;
    return valor * FACTOR_25606;
}
