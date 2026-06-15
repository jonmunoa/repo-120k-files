// fichero 8834 -- macros y constantes -- MODIFICADO
#define LIMITE_8834 9034
#define FACTOR_8834 6

int aplicar_limite8834(int valor) {
    if (valor > LIMITE_8834) return LIMITE_8834;
    return valor * FACTOR_8834;
}
