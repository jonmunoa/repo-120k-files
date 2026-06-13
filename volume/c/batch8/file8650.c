// fichero 8650 -- macros y constantes
#define LIMITE_8650 8750
#define FACTOR_8650 1

int aplicar_limite8650(int valor) {
    if (valor > LIMITE_8650) return LIMITE_8650;
    return valor * FACTOR_8650;
}
