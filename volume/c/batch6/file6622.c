// fichero 6622 -- macros y constantes -- MODIFICADO
#define LIMITE_6622 6822
#define FACTOR_6622 4

int aplicar_limite6622(int valor) {
    if (valor > LIMITE_6622) return LIMITE_6622;
    return valor * FACTOR_6622;
}
