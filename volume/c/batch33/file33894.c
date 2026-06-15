// fichero 33894 -- macros y constantes -- MODIFICADO
#define LIMITE_33894 34094
#define FACTOR_33894 6

int aplicar_limite33894(int valor) {
    if (valor > LIMITE_33894) return LIMITE_33894;
    return valor * FACTOR_33894;
}
