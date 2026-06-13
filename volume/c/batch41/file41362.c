// fichero 41362 -- macros y constantes
#define LIMITE_41362 41462
#define FACTOR_41362 3

int aplicar_limite41362(int valor) {
    if (valor > LIMITE_41362) return LIMITE_41362;
    return valor * FACTOR_41362;
}
