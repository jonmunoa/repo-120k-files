// fichero 28766 -- macros y constantes -- MODIFICADO
#define LIMITE_28766 28966
#define FACTOR_28766 3

int aplicar_limite28766(int valor) {
    if (valor > LIMITE_28766) return LIMITE_28766;
    return valor * FACTOR_28766;
}
