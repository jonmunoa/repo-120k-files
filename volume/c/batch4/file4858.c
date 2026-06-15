// fichero 4858 -- macros y constantes -- MODIFICADO
#define LIMITE_4858 5058
#define FACTOR_4858 5

int aplicar_limite4858(int valor) {
    if (valor > LIMITE_4858) return LIMITE_4858;
    return valor * FACTOR_4858;
}
