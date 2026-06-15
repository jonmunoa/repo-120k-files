// fichero 17794 -- macros y constantes -- MODIFICADO
#define LIMITE_17794 17994
#define FACTOR_17794 6

int aplicar_limite17794(int valor) {
    if (valor > LIMITE_17794) return LIMITE_17794;
    return valor * FACTOR_17794;
}
