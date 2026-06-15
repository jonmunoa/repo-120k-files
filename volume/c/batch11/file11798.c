// fichero 11798 -- macros y constantes -- MODIFICADO
#define LIMITE_11798 11998
#define FACTOR_11798 5

int aplicar_limite11798(int valor) {
    if (valor > LIMITE_11798) return LIMITE_11798;
    return valor * FACTOR_11798;
}
