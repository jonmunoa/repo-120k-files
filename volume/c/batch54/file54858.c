// fichero 54858 -- macros y constantes
#define LIMITE_54858 54958
#define FACTOR_54858 4

int aplicar_limite54858(int valor) {
    if (valor > LIMITE_54858) return LIMITE_54858;
    return valor * FACTOR_54858;
}
