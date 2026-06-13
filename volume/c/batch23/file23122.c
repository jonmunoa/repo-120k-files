// fichero 23122 -- macros y constantes
#define LIMITE_23122 23222
#define FACTOR_23122 3

int aplicar_limite23122(int valor) {
    if (valor > LIMITE_23122) return LIMITE_23122;
    return valor * FACTOR_23122;
}
