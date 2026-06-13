// fichero 43470 -- macros y constantes
#define LIMITE_43470 43570
#define FACTOR_43470 1

int aplicar_limite43470(int valor) {
    if (valor > LIMITE_43470) return LIMITE_43470;
    return valor * FACTOR_43470;
}
