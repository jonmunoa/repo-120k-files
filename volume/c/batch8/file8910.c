// fichero 8910 -- macros y constantes
#define LIMITE_8910 9010
#define FACTOR_8910 1

int aplicar_limite8910(int valor) {
    if (valor > LIMITE_8910) return LIMITE_8910;
    return valor * FACTOR_8910;
}
