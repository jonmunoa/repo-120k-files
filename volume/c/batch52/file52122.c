// fichero 52122 -- macros y constantes
#define LIMITE_52122 52222
#define FACTOR_52122 3

int aplicar_limite52122(int valor) {
    if (valor > LIMITE_52122) return LIMITE_52122;
    return valor * FACTOR_52122;
}
