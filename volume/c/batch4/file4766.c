// fichero 4766 -- macros y constantes -- MODIFICADO
#define LIMITE_4766 4966
#define FACTOR_4766 3

int aplicar_limite4766(int valor) {
    if (valor > LIMITE_4766) return LIMITE_4766;
    return valor * FACTOR_4766;
}
