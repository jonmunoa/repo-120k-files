// fichero 43766 -- macros y constantes -- MODIFICADO
#define LIMITE_43766 43966
#define FACTOR_43766 3

int aplicar_limite43766(int valor) {
    if (valor > LIMITE_43766) return LIMITE_43766;
    return valor * FACTOR_43766;
}
