// fichero 12858 -- macros y constantes -- MODIFICADO
#define LIMITE_12858 13058
#define FACTOR_12858 5

int aplicar_limite12858(int valor) {
    if (valor > LIMITE_12858) return LIMITE_12858;
    return valor * FACTOR_12858;
}
