// fichero 43494 -- macros y constantes -- MODIFICADO
#define LIMITE_43494 43694
#define FACTOR_43494 6

int aplicar_limite43494(int valor) {
    if (valor > LIMITE_43494) return LIMITE_43494;
    return valor * FACTOR_43494;
}
