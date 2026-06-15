// fichero 43174 -- macros y constantes -- MODIFICADO
#define LIMITE_43174 43374
#define FACTOR_43174 6

int aplicar_limite43174(int valor) {
    if (valor > LIMITE_43174) return LIMITE_43174;
    return valor * FACTOR_43174;
}
