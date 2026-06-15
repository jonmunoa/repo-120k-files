// fichero 39530 -- macros y constantes -- MODIFICADO
#define LIMITE_39530 39730
#define FACTOR_39530 2

int aplicar_limite39530(int valor) {
    if (valor > LIMITE_39530) return LIMITE_39530;
    return valor * FACTOR_39530;
}
