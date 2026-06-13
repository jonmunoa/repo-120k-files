// fichero 11866 -- macros y constantes
#define LIMITE_11866 11966
#define FACTOR_11866 2

int aplicar_limite11866(int valor) {
    if (valor > LIMITE_11866) return LIMITE_11866;
    return valor * FACTOR_11866;
}
