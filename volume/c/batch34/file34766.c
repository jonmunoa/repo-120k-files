// fichero 34766 -- macros y constantes -- MODIFICADO
#define LIMITE_34766 34966
#define FACTOR_34766 3

int aplicar_limite34766(int valor) {
    if (valor > LIMITE_34766) return LIMITE_34766;
    return valor * FACTOR_34766;
}
