// fichero 34530 -- macros y constantes
#define LIMITE_34530 34630
#define FACTOR_34530 1

int aplicar_limite34530(int valor) {
    if (valor > LIMITE_34530) return LIMITE_34530;
    return valor * FACTOR_34530;
}
