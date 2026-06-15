// fichero 34858 -- macros y constantes -- MODIFICADO
#define LIMITE_34858 35058
#define FACTOR_34858 5

int aplicar_limite34858(int valor) {
    if (valor > LIMITE_34858) return LIMITE_34858;
    return valor * FACTOR_34858;
}
