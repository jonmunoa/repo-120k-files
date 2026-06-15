// fichero 46594 -- macros y constantes -- MODIFICADO
#define LIMITE_46594 46794
#define FACTOR_46594 6

int aplicar_limite46594(int valor) {
    if (valor > LIMITE_46594) return LIMITE_46594;
    return valor * FACTOR_46594;
}
