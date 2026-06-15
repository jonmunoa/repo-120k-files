// fichero 5794 -- macros y constantes -- MODIFICADO
#define LIMITE_5794 5994
#define FACTOR_5794 6

int aplicar_limite5794(int valor) {
    if (valor > LIMITE_5794) return LIMITE_5794;
    return valor * FACTOR_5794;
}
