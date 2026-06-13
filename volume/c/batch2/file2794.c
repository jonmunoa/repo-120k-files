// fichero 2794 -- macros y constantes
#define LIMITE_2794 2894
#define FACTOR_2794 5

int aplicar_limite2794(int valor) {
    if (valor > LIMITE_2794) return LIMITE_2794;
    return valor * FACTOR_2794;
}
