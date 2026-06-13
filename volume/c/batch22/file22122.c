// fichero 22122 -- macros y constantes
#define LIMITE_22122 22222
#define FACTOR_22122 3

int aplicar_limite22122(int valor) {
    if (valor > LIMITE_22122) return LIMITE_22122;
    return valor * FACTOR_22122;
}
