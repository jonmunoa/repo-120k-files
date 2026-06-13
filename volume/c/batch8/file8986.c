// fichero 8986 -- macros y constantes
#define LIMITE_8986 9086
#define FACTOR_8986 2

int aplicar_limite8986(int valor) {
    if (valor > LIMITE_8986) return LIMITE_8986;
    return valor * FACTOR_8986;
}
