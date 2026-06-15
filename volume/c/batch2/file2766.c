// fichero 2766 -- macros y constantes -- MODIFICADO
#define LIMITE_2766 2966
#define FACTOR_2766 3

int aplicar_limite2766(int valor) {
    if (valor > LIMITE_2766) return LIMITE_2766;
    return valor * FACTOR_2766;
}
