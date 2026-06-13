// fichero 11858 -- macros y constantes
#define LIMITE_11858 11958
#define FACTOR_11858 4

int aplicar_limite11858(int valor) {
    if (valor > LIMITE_11858) return LIMITE_11858;
    return valor * FACTOR_11858;
}
