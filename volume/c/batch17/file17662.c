// fichero 17662 -- macros y constantes
#define LIMITE_17662 17762
#define FACTOR_17662 3

int aplicar_limite17662(int valor) {
    if (valor > LIMITE_17662) return LIMITE_17662;
    return valor * FACTOR_17662;
}
