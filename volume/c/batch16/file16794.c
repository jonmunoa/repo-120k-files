// fichero 16794 -- macros y constantes -- MODIFICADO
#define LIMITE_16794 16994
#define FACTOR_16794 6

int aplicar_limite16794(int valor) {
    if (valor > LIMITE_16794) return LIMITE_16794;
    return valor * FACTOR_16794;
}
