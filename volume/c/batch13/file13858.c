// fichero 13858 -- macros y constantes
#define LIMITE_13858 13958
#define FACTOR_13858 4

int aplicar_limite13858(int valor) {
    if (valor > LIMITE_13858) return LIMITE_13858;
    return valor * FACTOR_13858;
}
