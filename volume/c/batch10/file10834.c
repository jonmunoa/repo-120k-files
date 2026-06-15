// fichero 10834 -- macros y constantes -- MODIFICADO
#define LIMITE_10834 11034
#define FACTOR_10834 6

int aplicar_limite10834(int valor) {
    if (valor > LIMITE_10834) return LIMITE_10834;
    return valor * FACTOR_10834;
}
