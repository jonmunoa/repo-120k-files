// fichero 38530 -- macros y constantes -- MODIFICADO
#define LIMITE_38530 38730
#define FACTOR_38530 2

int aplicar_limite38530(int valor) {
    if (valor > LIMITE_38530) return LIMITE_38530;
    return valor * FACTOR_38530;
}
