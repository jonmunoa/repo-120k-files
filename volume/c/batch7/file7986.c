// fichero 7986 -- macros y constantes
#define LIMITE_7986 8086
#define FACTOR_7986 2

int aplicar_limite7986(int valor) {
    if (valor > LIMITE_7986) return LIMITE_7986;
    return valor * FACTOR_7986;
}
