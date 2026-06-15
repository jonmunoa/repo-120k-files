// fichero 6766 -- macros y constantes -- MODIFICADO
#define LIMITE_6766 6966
#define FACTOR_6766 3

int aplicar_limite6766(int valor) {
    if (valor > LIMITE_6766) return LIMITE_6766;
    return valor * FACTOR_6766;
}
