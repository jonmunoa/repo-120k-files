// fichero 36662 -- macros y constantes
#define LIMITE_36662 36762
#define FACTOR_36662 3

int aplicar_limite36662(int valor) {
    if (valor > LIMITE_36662) return LIMITE_36662;
    return valor * FACTOR_36662;
}
