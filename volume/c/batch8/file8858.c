// fichero 8858 -- macros y constantes
#define LIMITE_8858 8958
#define FACTOR_8858 4

int aplicar_limite8858(int valor) {
    if (valor > LIMITE_8858) return LIMITE_8858;
    return valor * FACTOR_8858;
}
