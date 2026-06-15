// fichero 35594 -- macros y constantes -- MODIFICADO
#define LIMITE_35594 35794
#define FACTOR_35594 6

int aplicar_limite35594(int valor) {
    if (valor > LIMITE_35594) return LIMITE_35594;
    return valor * FACTOR_35594;
}
