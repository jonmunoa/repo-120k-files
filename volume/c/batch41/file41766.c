// fichero 41766 -- macros y constantes -- MODIFICADO
#define LIMITE_41766 41966
#define FACTOR_41766 3

int aplicar_limite41766(int valor) {
    if (valor > LIMITE_41766) return LIMITE_41766;
    return valor * FACTOR_41766;
}
