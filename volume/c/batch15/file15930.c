// fichero 15930 -- macros y constantes
#define LIMITE_15930 16030
#define FACTOR_15930 1

int aplicar_limite15930(int valor) {
    if (valor > LIMITE_15930) return LIMITE_15930;
    return valor * FACTOR_15930;
}
