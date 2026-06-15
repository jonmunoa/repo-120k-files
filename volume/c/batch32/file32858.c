// fichero 32858 -- macros y constantes -- MODIFICADO
#define LIMITE_32858 33058
#define FACTOR_32858 5

int aplicar_limite32858(int valor) {
    if (valor > LIMITE_32858) return LIMITE_32858;
    return valor * FACTOR_32858;
}
