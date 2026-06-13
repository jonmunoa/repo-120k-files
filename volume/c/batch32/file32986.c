// fichero 32986 -- macros y constantes
#define LIMITE_32986 33086
#define FACTOR_32986 2

int aplicar_limite32986(int valor) {
    if (valor > LIMITE_32986) return LIMITE_32986;
    return valor * FACTOR_32986;
}
