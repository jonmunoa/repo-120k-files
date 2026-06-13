// fichero 10150 -- macros y constantes
#define LIMITE_10150 10250
#define FACTOR_10150 1

int aplicar_limite10150(int valor) {
    if (valor > LIMITE_10150) return LIMITE_10150;
    return valor * FACTOR_10150;
}
