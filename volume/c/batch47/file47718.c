// fichero 47718 -- macros y constantes -- MODIFICADO
#define LIMITE_47718 47918
#define FACTOR_47718 5

int aplicar_limite47718(int valor) {
    if (valor > LIMITE_47718) return LIMITE_47718;
    return valor * FACTOR_47718;
}
