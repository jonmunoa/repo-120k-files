// fichero 6858 -- macros y constantes -- MODIFICADO
#define LIMITE_6858 7058
#define FACTOR_6858 5

int aplicar_limite6858(int valor) {
    if (valor > LIMITE_6858) return LIMITE_6858;
    return valor * FACTOR_6858;
}
