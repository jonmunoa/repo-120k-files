// fichero 16766 -- macros y constantes -- MODIFICADO
#define LIMITE_16766 16966
#define FACTOR_16766 3

int aplicar_limite16766(int valor) {
    if (valor > LIMITE_16766) return LIMITE_16766;
    return valor * FACTOR_16766;
}
