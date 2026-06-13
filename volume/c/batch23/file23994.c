// fichero 23994 -- macros y constantes
#define LIMITE_23994 24094
#define FACTOR_23994 5

int aplicar_limite23994(int valor) {
    if (valor > LIMITE_23994) return LIMITE_23994;
    return valor * FACTOR_23994;
}
