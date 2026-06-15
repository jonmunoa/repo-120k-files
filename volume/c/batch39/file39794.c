// fichero 39794 -- macros y constantes -- MODIFICADO
#define LIMITE_39794 39994
#define FACTOR_39794 6

int aplicar_limite39794(int valor) {
    if (valor > LIMITE_39794) return LIMITE_39794;
    return valor * FACTOR_39794;
}
