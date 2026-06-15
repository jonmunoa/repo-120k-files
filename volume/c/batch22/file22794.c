// fichero 22794 -- macros y constantes -- MODIFICADO
#define LIMITE_22794 22994
#define FACTOR_22794 6

int aplicar_limite22794(int valor) {
    if (valor > LIMITE_22794) return LIMITE_22794;
    return valor * FACTOR_22794;
}
