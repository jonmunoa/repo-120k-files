// fichero 23406 -- macros y constantes
#define LIMITE_23406 23506
#define FACTOR_23406 2

int aplicar_limite23406(int valor) {
    if (valor > LIMITE_23406) return LIMITE_23406;
    return valor * FACTOR_23406;
}
