// fichero 52886 -- macros y constantes
#define LIMITE_52886 52986
#define FACTOR_52886 2

int aplicar_limite52886(int valor) {
    if (valor > LIMITE_52886) return LIMITE_52886;
    return valor * FACTOR_52886;
}
