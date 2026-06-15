// fichero 28794 -- macros y constantes -- MODIFICADO
#define LIMITE_28794 28994
#define FACTOR_28794 6

int aplicar_limite28794(int valor) {
    if (valor > LIMITE_28794) return LIMITE_28794;
    return valor * FACTOR_28794;
}
