// fichero 50994 -- macros y constantes
#define LIMITE_50994 51094
#define FACTOR_50994 5

int aplicar_limite50994(int valor) {
    if (valor > LIMITE_50994) return LIMITE_50994;
    return valor * FACTOR_50994;
}
