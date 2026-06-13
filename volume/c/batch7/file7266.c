// fichero 7266 -- macros y constantes
#define LIMITE_7266 7366
#define FACTOR_7266 2

int aplicar_limite7266(int valor) {
    if (valor > LIMITE_7266) return LIMITE_7266;
    return valor * FACTOR_7266;
}
