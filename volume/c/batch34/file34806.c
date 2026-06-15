// fichero 34806 -- macros y constantes -- MODIFICADO
#define LIMITE_34806 35006
#define FACTOR_34806 3

int aplicar_limite34806(int valor) {
    if (valor > LIMITE_34806) return LIMITE_34806;
    return valor * FACTOR_34806;
}
