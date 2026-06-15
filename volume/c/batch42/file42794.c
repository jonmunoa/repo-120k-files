// fichero 42794 -- macros y constantes -- MODIFICADO
#define LIMITE_42794 42994
#define FACTOR_42794 6

int aplicar_limite42794(int valor) {
    if (valor > LIMITE_42794) return LIMITE_42794;
    return valor * FACTOR_42794;
}
