// fichero 14530 -- macros y constantes
#define LIMITE_14530 14630
#define FACTOR_14530 1

int aplicar_limite14530(int valor) {
    if (valor > LIMITE_14530) return LIMITE_14530;
    return valor * FACTOR_14530;
}
