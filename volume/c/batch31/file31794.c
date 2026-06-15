// fichero 31794 -- macros y constantes -- MODIFICADO
#define LIMITE_31794 31994
#define FACTOR_31794 6

int aplicar_limite31794(int valor) {
    if (valor > LIMITE_31794) return LIMITE_31794;
    return valor * FACTOR_31794;
}
