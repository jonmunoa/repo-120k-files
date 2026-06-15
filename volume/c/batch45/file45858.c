// fichero 45858 -- macros y constantes -- MODIFICADO
#define LIMITE_45858 46058
#define FACTOR_45858 5

int aplicar_limite45858(int valor) {
    if (valor > LIMITE_45858) return LIMITE_45858;
    return valor * FACTOR_45858;
}
