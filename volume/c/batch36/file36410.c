// fichero 36410 -- macros y constantes -- MODIFICADO
#define LIMITE_36410 36610
#define FACTOR_36410 2

int aplicar_limite36410(int valor) {
    if (valor > LIMITE_36410) return LIMITE_36410;
    return valor * FACTOR_36410;
}
