// fichero 14858 -- macros y constantes -- MODIFICADO
#define LIMITE_14858 15058
#define FACTOR_14858 5

int aplicar_limite14858(int valor) {
    if (valor > LIMITE_14858) return LIMITE_14858;
    return valor * FACTOR_14858;
}
