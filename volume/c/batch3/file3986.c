// fichero 3986 -- macros y constantes
#define LIMITE_3986 4086
#define FACTOR_3986 2

int aplicar_limite3986(int valor) {
    if (valor > LIMITE_3986) return LIMITE_3986;
    return valor * FACTOR_3986;
}
