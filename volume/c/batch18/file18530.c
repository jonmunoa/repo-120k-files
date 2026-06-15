// fichero 18530 -- macros y constantes -- MODIFICADO
#define LIMITE_18530 18730
#define FACTOR_18530 2

int aplicar_limite18530(int valor) {
    if (valor > LIMITE_18530) return LIMITE_18530;
    return valor * FACTOR_18530;
}
