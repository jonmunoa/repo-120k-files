// fichero 12858 -- macros y constantes
#define LIMITE_12858 12958
#define FACTOR_12858 4

int aplicar_limite12858(int valor) {
    if (valor > LIMITE_12858) return LIMITE_12858;
    return valor * FACTOR_12858;
}
