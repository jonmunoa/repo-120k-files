// fichero 11662 -- macros y constantes
#define LIMITE_11662 11762
#define FACTOR_11662 3

int aplicar_limite11662(int valor) {
    if (valor > LIMITE_11662) return LIMITE_11662;
    return valor * FACTOR_11662;
}
