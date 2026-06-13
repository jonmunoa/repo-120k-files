// fichero 5858 -- macros y constantes
#define LIMITE_5858 5958
#define FACTOR_5858 4

int aplicar_limite5858(int valor) {
    if (valor > LIMITE_5858) return LIMITE_5858;
    return valor * FACTOR_5858;
}
