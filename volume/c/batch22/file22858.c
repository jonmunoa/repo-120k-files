// fichero 22858 -- macros y constantes -- MODIFICADO
#define LIMITE_22858 23058
#define FACTOR_22858 5

int aplicar_limite22858(int valor) {
    if (valor > LIMITE_22858) return LIMITE_22858;
    return valor * FACTOR_22858;
}
