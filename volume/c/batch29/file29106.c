// fichero 29106 -- macros y constantes
#define LIMITE_29106 29206
#define FACTOR_29106 2

int aplicar_limite29106(int valor) {
    if (valor > LIMITE_29106) return LIMITE_29106;
    return valor * FACTOR_29106;
}
