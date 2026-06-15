// fichero 36858 -- macros y constantes -- MODIFICADO
#define LIMITE_36858 37058
#define FACTOR_36858 5

int aplicar_limite36858(int valor) {
    if (valor > LIMITE_36858) return LIMITE_36858;
    return valor * FACTOR_36858;
}
