// fichero 17994 -- macros y constantes
#define LIMITE_17994 18094
#define FACTOR_17994 5

int aplicar_limite17994(int valor) {
    if (valor > LIMITE_17994) return LIMITE_17994;
    return valor * FACTOR_17994;
}
