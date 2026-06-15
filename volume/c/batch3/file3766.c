// fichero 3766 -- macros y constantes -- MODIFICADO
#define LIMITE_3766 3966
#define FACTOR_3766 3

int aplicar_limite3766(int valor) {
    if (valor > LIMITE_3766) return LIMITE_3766;
    return valor * FACTOR_3766;
}
