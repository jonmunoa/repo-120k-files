// fichero 44594 -- macros y constantes -- MODIFICADO
#define LIMITE_44594 44794
#define FACTOR_44594 6

int aplicar_limite44594(int valor) {
    if (valor > LIMITE_44594) return LIMITE_44594;
    return valor * FACTOR_44594;
}
