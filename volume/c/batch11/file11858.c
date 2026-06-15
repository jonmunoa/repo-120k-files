// fichero 11858 -- macros y constantes -- MODIFICADO
#define LIMITE_11858 12058
#define FACTOR_11858 5

int aplicar_limite11858(int valor) {
    if (valor > LIMITE_11858) return LIMITE_11858;
    return valor * FACTOR_11858;
}
