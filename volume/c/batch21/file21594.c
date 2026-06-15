// fichero 21594 -- macros y constantes -- MODIFICADO
#define LIMITE_21594 21794
#define FACTOR_21594 6

int aplicar_limite21594(int valor) {
    if (valor > LIMITE_21594) return LIMITE_21594;
    return valor * FACTOR_21594;
}
