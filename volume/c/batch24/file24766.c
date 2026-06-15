// fichero 24766 -- macros y constantes -- MODIFICADO
#define LIMITE_24766 24966
#define FACTOR_24766 3

int aplicar_limite24766(int valor) {
    if (valor > LIMITE_24766) return LIMITE_24766;
    return valor * FACTOR_24766;
}
