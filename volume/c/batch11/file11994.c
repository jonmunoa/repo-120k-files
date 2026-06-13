// fichero 11994 -- macros y constantes
#define LIMITE_11994 12094
#define FACTOR_11994 5

int aplicar_limite11994(int valor) {
    if (valor > LIMITE_11994) return LIMITE_11994;
    return valor * FACTOR_11994;
}
