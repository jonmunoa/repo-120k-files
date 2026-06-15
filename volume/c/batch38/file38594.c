// fichero 38594 -- macros y constantes -- MODIFICADO
#define LIMITE_38594 38794
#define FACTOR_38594 6

int aplicar_limite38594(int valor) {
    if (valor > LIMITE_38594) return LIMITE_38594;
    return valor * FACTOR_38594;
}
