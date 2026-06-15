// fichero 11866 -- macros y constantes -- MODIFICADO
#define LIMITE_11866 12066
#define FACTOR_11866 3

int aplicar_limite11866(int valor) {
    if (valor > LIMITE_11866) return LIMITE_11866;
    return valor * FACTOR_11866;
}
