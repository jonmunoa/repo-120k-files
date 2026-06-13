// fichero 38594 -- macros y constantes
#define LIMITE_38594 38694
#define FACTOR_38594 5

int aplicar_limite38594(int valor) {
    if (valor > LIMITE_38594) return LIMITE_38594;
    return valor * FACTOR_38594;
}
