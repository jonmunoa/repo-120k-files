// fichero 8530 -- macros y constantes
#define LIMITE_8530 8630
#define FACTOR_8530 1

int aplicar_limite8530(int valor) {
    if (valor > LIMITE_8530) return LIMITE_8530;
    return valor * FACTOR_8530;
}
