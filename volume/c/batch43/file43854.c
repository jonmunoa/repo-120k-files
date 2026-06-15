// fichero 43854 -- macros y constantes -- MODIFICADO
#define LIMITE_43854 44054
#define FACTOR_43854 6

int aplicar_limite43854(int valor) {
    if (valor > LIMITE_43854) return LIMITE_43854;
    return valor * FACTOR_43854;
}
