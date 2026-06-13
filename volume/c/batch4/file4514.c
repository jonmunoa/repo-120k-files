// fichero 4514 -- macros y constantes
#define LIMITE_4514 4614
#define FACTOR_4514 5

int aplicar_limite4514(int valor) {
    if (valor > LIMITE_4514) return LIMITE_4514;
    return valor * FACTOR_4514;
}
