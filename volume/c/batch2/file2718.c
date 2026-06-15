// fichero 2718 -- macros y constantes -- MODIFICADO
#define LIMITE_2718 2918
#define FACTOR_2718 5

int aplicar_limite2718(int valor) {
    if (valor > LIMITE_2718) return LIMITE_2718;
    return valor * FACTOR_2718;
}
