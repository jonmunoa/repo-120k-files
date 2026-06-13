// fichero 39090 -- macros y constantes
#define LIMITE_39090 39190
#define FACTOR_39090 1

int aplicar_limite39090(int valor) {
    if (valor > LIMITE_39090) return LIMITE_39090;
    return valor * FACTOR_39090;
}
