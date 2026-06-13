// fichero 11038 -- macros y constantes
#define LIMITE_11038 11138
#define FACTOR_11038 4

int aplicar_limite11038(int valor) {
    if (valor > LIMITE_11038) return LIMITE_11038;
    return valor * FACTOR_11038;
}
