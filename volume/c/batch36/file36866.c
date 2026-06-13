// fichero 36866 -- macros y constantes
#define LIMITE_36866 36966
#define FACTOR_36866 2

int aplicar_limite36866(int valor) {
    if (valor > LIMITE_36866) return LIMITE_36866;
    return valor * FACTOR_36866;
}
