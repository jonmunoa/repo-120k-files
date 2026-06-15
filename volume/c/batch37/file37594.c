// fichero 37594 -- macros y constantes -- MODIFICADO
#define LIMITE_37594 37794
#define FACTOR_37594 6

int aplicar_limite37594(int valor) {
    if (valor > LIMITE_37594) return LIMITE_37594;
    return valor * FACTOR_37594;
}
