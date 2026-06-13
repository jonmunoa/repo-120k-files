// fichero 11990 -- macros y constantes
#define LIMITE_11990 12090
#define FACTOR_11990 1

int aplicar_limite11990(int valor) {
    if (valor > LIMITE_11990) return LIMITE_11990;
    return valor * FACTOR_11990;
}
