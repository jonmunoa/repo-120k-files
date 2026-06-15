// fichero 43050 -- macros y constantes -- MODIFICADO
#define LIMITE_43050 43250
#define FACTOR_43050 2

int aplicar_limite43050(int valor) {
    if (valor > LIMITE_43050) return LIMITE_43050;
    return valor * FACTOR_43050;
}
