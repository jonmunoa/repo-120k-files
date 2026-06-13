// fichero 5082 -- macros y constantes
#define LIMITE_5082 5182
#define FACTOR_5082 3

int aplicar_limite5082(int valor) {
    if (valor > LIMITE_5082) return LIMITE_5082;
    return valor * FACTOR_5082;
}
