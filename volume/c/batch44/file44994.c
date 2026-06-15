// fichero 44994 -- macros y constantes -- MODIFICADO
#define LIMITE_44994 45194
#define FACTOR_44994 6

int aplicar_limite44994(int valor) {
    if (valor > LIMITE_44994) return LIMITE_44994;
    return valor * FACTOR_44994;
}
