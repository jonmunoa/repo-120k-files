// fichero 18514 -- macros y constantes
#define LIMITE_18514 18614
#define FACTOR_18514 5

int aplicar_limite18514(int valor) {
    if (valor > LIMITE_18514) return LIMITE_18514;
    return valor * FACTOR_18514;
}
