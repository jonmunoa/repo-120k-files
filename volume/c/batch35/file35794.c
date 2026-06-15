// fichero 35794 -- macros y constantes -- MODIFICADO
#define LIMITE_35794 35994
#define FACTOR_35794 6

int aplicar_limite35794(int valor) {
    if (valor > LIMITE_35794) return LIMITE_35794;
    return valor * FACTOR_35794;
}
