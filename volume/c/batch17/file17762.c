// fichero 17762 -- macros y constantes
#define LIMITE_17762 17862
#define FACTOR_17762 3

int aplicar_limite17762(int valor) {
    if (valor > LIMITE_17762) return LIMITE_17762;
    return valor * FACTOR_17762;
}
