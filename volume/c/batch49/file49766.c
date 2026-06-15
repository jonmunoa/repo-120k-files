// fichero 49766 -- macros y constantes -- MODIFICADO
#define LIMITE_49766 49966
#define FACTOR_49766 3

int aplicar_limite49766(int valor) {
    if (valor > LIMITE_49766) return LIMITE_49766;
    return valor * FACTOR_49766;
}
