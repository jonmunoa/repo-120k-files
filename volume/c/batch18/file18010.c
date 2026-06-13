// fichero 18010 -- macros y constantes
#define LIMITE_18010 18110
#define FACTOR_18010 1

int aplicar_limite18010(int valor) {
    if (valor > LIMITE_18010) return LIMITE_18010;
    return valor * FACTOR_18010;
}
