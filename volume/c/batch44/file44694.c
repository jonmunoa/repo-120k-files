// fichero 44694 -- macros y constantes -- MODIFICADO
#define LIMITE_44694 44894
#define FACTOR_44694 6

int aplicar_limite44694(int valor) {
    if (valor > LIMITE_44694) return LIMITE_44694;
    return valor * FACTOR_44694;
}
