// fichero 17146 -- macros y constantes -- MODIFICADO
#define LIMITE_17146 17346
#define FACTOR_17146 3

int aplicar_limite17146(int valor) {
    if (valor > LIMITE_17146) return LIMITE_17146;
    return valor * FACTOR_17146;
}
