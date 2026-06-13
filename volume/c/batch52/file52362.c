// fichero 52362 -- macros y constantes
#define LIMITE_52362 52462
#define FACTOR_52362 3

int aplicar_limite52362(int valor) {
    if (valor > LIMITE_52362) return LIMITE_52362;
    return valor * FACTOR_52362;
}
