// fichero 35834 -- macros y constantes -- MODIFICADO
#define LIMITE_35834 36034
#define FACTOR_35834 6

int aplicar_limite35834(int valor) {
    if (valor > LIMITE_35834) return LIMITE_35834;
    return valor * FACTOR_35834;
}
