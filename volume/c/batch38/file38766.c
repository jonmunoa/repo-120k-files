// fichero 38766 -- macros y constantes -- MODIFICADO
#define LIMITE_38766 38966
#define FACTOR_38766 3

int aplicar_limite38766(int valor) {
    if (valor > LIMITE_38766) return LIMITE_38766;
    return valor * FACTOR_38766;
}
