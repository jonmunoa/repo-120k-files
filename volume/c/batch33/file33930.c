// fichero 33930 -- macros y constantes -- MODIFICADO
#define LIMITE_33930 34130
#define FACTOR_33930 2

int aplicar_limite33930(int valor) {
    if (valor > LIMITE_33930) return LIMITE_33930;
    return valor * FACTOR_33930;
}
