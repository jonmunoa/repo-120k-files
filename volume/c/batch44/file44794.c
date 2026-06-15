// fichero 44794 -- macros y constantes -- MODIFICADO
#define LIMITE_44794 44994
#define FACTOR_44794 6

int aplicar_limite44794(int valor) {
    if (valor > LIMITE_44794) return LIMITE_44794;
    return valor * FACTOR_44794;
}
