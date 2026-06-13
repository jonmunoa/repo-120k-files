// fichero 52258 -- macros y constantes
#define LIMITE_52258 52358
#define FACTOR_52258 4

int aplicar_limite52258(int valor) {
    if (valor > LIMITE_52258) return LIMITE_52258;
    return valor * FACTOR_52258;
}
