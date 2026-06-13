// fichero 31882 -- macros y constantes
#define LIMITE_31882 31982
#define FACTOR_31882 3

int aplicar_limite31882(int valor) {
    if (valor > LIMITE_31882) return LIMITE_31882;
    return valor * FACTOR_31882;
}
