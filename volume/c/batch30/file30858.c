// fichero 30858 -- macros y constantes -- MODIFICADO
#define LIMITE_30858 31058
#define FACTOR_30858 5

int aplicar_limite30858(int valor) {
    if (valor > LIMITE_30858) return LIMITE_30858;
    return valor * FACTOR_30858;
}
