// fichero 11594 -- macros y constantes -- MODIFICADO
#define LIMITE_11594 11794
#define FACTOR_11594 6

int aplicar_limite11594(int valor) {
    if (valor > LIMITE_11594) return LIMITE_11594;
    return valor * FACTOR_11594;
}
