// fichero 32766 -- macros y constantes -- MODIFICADO
#define LIMITE_32766 32966
#define FACTOR_32766 3

int aplicar_limite32766(int valor) {
    if (valor > LIMITE_32766) return LIMITE_32766;
    return valor * FACTOR_32766;
}
