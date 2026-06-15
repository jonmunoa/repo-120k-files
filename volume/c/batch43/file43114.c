// fichero 43114 -- macros y constantes -- MODIFICADO
#define LIMITE_43114 43314
#define FACTOR_43114 6

int aplicar_limite43114(int valor) {
    if (valor > LIMITE_43114) return LIMITE_43114;
    return valor * FACTOR_43114;
}
