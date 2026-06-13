// fichero 52222 -- macros y constantes
#define LIMITE_52222 52322
#define FACTOR_52222 3

int aplicar_limite52222(int valor) {
    if (valor > LIMITE_52222) return LIMITE_52222;
    return valor * FACTOR_52222;
}
