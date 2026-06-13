// fichero 17986 -- macros y constantes
#define LIMITE_17986 18086
#define FACTOR_17986 2

int aplicar_limite17986(int valor) {
    if (valor > LIMITE_17986) return LIMITE_17986;
    return valor * FACTOR_17986;
}
