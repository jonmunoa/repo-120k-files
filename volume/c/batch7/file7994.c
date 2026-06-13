// fichero 7994 -- macros y constantes
#define LIMITE_7994 8094
#define FACTOR_7994 5

int aplicar_limite7994(int valor) {
    if (valor > LIMITE_7994) return LIMITE_7994;
    return valor * FACTOR_7994;
}
