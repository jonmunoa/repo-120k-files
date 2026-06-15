// fichero 20858 -- macros y constantes -- MODIFICADO
#define LIMITE_20858 21058
#define FACTOR_20858 5

int aplicar_limite20858(int valor) {
    if (valor > LIMITE_20858) return LIMITE_20858;
    return valor * FACTOR_20858;
}
