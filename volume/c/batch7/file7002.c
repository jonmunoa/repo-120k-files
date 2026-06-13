// fichero 7002 -- macros y constantes
#define LIMITE_7002 7102
#define FACTOR_7002 3

int aplicar_limite7002(int valor) {
    if (valor > LIMITE_7002) return LIMITE_7002;
    return valor * FACTOR_7002;
}
