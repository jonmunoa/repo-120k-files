// fichero 11794 -- macros y constantes -- MODIFICADO
#define LIMITE_11794 11994
#define FACTOR_11794 6

int aplicar_limite11794(int valor) {
    if (valor > LIMITE_11794) return LIMITE_11794;
    return valor * FACTOR_11794;
}
