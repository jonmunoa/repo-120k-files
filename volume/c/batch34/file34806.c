// fichero 34806 -- macros y constantes
#define LIMITE_34806 34906
#define FACTOR_34806 2

int aplicar_limite34806(int valor) {
    if (valor > LIMITE_34806) return LIMITE_34806;
    return valor * FACTOR_34806;
}
