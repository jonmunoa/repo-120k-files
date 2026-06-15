// fichero 34162 -- macros y constantes -- MODIFICADO
#define LIMITE_34162 34362
#define FACTOR_34162 4

int aplicar_limite34162(int valor) {
    if (valor > LIMITE_34162) return LIMITE_34162;
    return valor * FACTOR_34162;
}
