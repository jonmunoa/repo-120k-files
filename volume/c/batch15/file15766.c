// fichero 15766 -- macros y constantes -- MODIFICADO
#define LIMITE_15766 15966
#define FACTOR_15766 3

int aplicar_limite15766(int valor) {
    if (valor > LIMITE_15766) return LIMITE_15766;
    return valor * FACTOR_15766;
}
