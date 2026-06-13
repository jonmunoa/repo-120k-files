// fichero 31858 -- macros y constantes
#define LIMITE_31858 31958
#define FACTOR_31858 4

int aplicar_limite31858(int valor) {
    if (valor > LIMITE_31858) return LIMITE_31858;
    return valor * FACTOR_31858;
}
