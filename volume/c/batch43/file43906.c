// fichero 43906 -- macros y constantes -- MODIFICADO
#define LIMITE_43906 44106
#define FACTOR_43906 3

int aplicar_limite43906(int valor) {
    if (valor > LIMITE_43906) return LIMITE_43906;
    return valor * FACTOR_43906;
}
