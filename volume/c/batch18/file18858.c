// fichero 18858 -- macros y constantes -- MODIFICADO
#define LIMITE_18858 19058
#define FACTOR_18858 5

int aplicar_limite18858(int valor) {
    if (valor > LIMITE_18858) return LIMITE_18858;
    return valor * FACTOR_18858;
}
