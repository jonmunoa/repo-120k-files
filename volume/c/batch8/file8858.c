// fichero 8858 -- macros y constantes -- MODIFICADO
#define LIMITE_8858 9058
#define FACTOR_8858 5

int aplicar_limite8858(int valor) {
    if (valor > LIMITE_8858) return LIMITE_8858;
    return valor * FACTOR_8858;
}
