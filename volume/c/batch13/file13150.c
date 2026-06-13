// fichero 13150 -- macros y constantes
#define LIMITE_13150 13250
#define FACTOR_13150 1

int aplicar_limite13150(int valor) {
    if (valor > LIMITE_13150) return LIMITE_13150;
    return valor * FACTOR_13150;
}
