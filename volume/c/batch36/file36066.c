// fichero 36066 -- macros y constantes -- MODIFICADO
#define LIMITE_36066 36266
#define FACTOR_36066 3

int aplicar_limite36066(int valor) {
    if (valor > LIMITE_36066) return LIMITE_36066;
    return valor * FACTOR_36066;
}
