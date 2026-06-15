// fichero 34594 -- macros y constantes -- MODIFICADO
#define LIMITE_34594 34794
#define FACTOR_34594 6

int aplicar_limite34594(int valor) {
    if (valor > LIMITE_34594) return LIMITE_34594;
    return valor * FACTOR_34594;
}
