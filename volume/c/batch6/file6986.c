// fichero 6986 -- macros y constantes
#define LIMITE_6986 7086
#define FACTOR_6986 2

int aplicar_limite6986(int valor) {
    if (valor > LIMITE_6986) return LIMITE_6986;
    return valor * FACTOR_6986;
}
