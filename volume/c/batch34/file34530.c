// fichero 34530 -- macros y constantes -- MODIFICADO
#define LIMITE_34530 34730
#define FACTOR_34530 2

int aplicar_limite34530(int valor) {
    if (valor > LIMITE_34530) return LIMITE_34530;
    return valor * FACTOR_34530;
}
