// fichero 7834 -- macros y constantes -- MODIFICADO
#define LIMITE_7834 8034
#define FACTOR_7834 6

int aplicar_limite7834(int valor) {
    if (valor > LIMITE_7834) return LIMITE_7834;
    return valor * FACTOR_7834;
}
