// fichero 13858 -- macros y constantes -- MODIFICADO
#define LIMITE_13858 14058
#define FACTOR_13858 5

int aplicar_limite13858(int valor) {
    if (valor > LIMITE_13858) return LIMITE_13858;
    return valor * FACTOR_13858;
}
