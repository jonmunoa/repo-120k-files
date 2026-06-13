// fichero 8662 -- macros y constantes
#define LIMITE_8662 8762
#define FACTOR_8662 3

int aplicar_limite8662(int valor) {
    if (valor > LIMITE_8662) return LIMITE_8662;
    return valor * FACTOR_8662;
}
