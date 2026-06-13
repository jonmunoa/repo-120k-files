// fichero 30994 -- macros y constantes
#define LIMITE_30994 31094
#define FACTOR_30994 5

int aplicar_limite30994(int valor) {
    if (valor > LIMITE_30994) return LIMITE_30994;
    return valor * FACTOR_30994;
}
