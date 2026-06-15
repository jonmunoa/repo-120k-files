// fichero 43470 -- macros y constantes -- MODIFICADO
#define LIMITE_43470 43670
#define FACTOR_43470 2

int aplicar_limite43470(int valor) {
    if (valor > LIMITE_43470) return LIMITE_43470;
    return valor * FACTOR_43470;
}
