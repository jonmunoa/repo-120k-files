// fichero 13834 -- macros y constantes -- MODIFICADO
#define LIMITE_13834 14034
#define FACTOR_13834 6

int aplicar_limite13834(int valor) {
    if (valor > LIMITE_13834) return LIMITE_13834;
    return valor * FACTOR_13834;
}
