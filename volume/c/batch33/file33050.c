// fichero 33050 -- macros y constantes -- MODIFICADO
#define LIMITE_33050 33250
#define FACTOR_33050 2

int aplicar_limite33050(int valor) {
    if (valor > LIMITE_33050) return LIMITE_33050;
    return valor * FACTOR_33050;
}
